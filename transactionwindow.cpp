#include "transactionwindow.h"
#include "ui_transactionwindow.h"
#include <dbmanager.h>
#include <QMessageBox>
#include <QDebug>


int TransactionWindow::sender;
float subTotal;
float grandTotal;
float salesTax = .06;
float taxTotal;

static double extractDouble(const QString &s);

TransactionWindow::TransactionWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TransactionWindow)
{
    ui->setupUi(this);

    populateTables();
    ui->treeWidget->setColumnCount(3);


}

void TransactionWindow::populateTables()
{
    QTableView *tableView = ui->allTableView;
    this->model = new QSqlQueryModel();
    model->setQuery("SELECT [ID], [name], [quantity], [price] FROM [main].[inventory]");
    sort_filter = new QSortFilterProxyModel(this);
    sort_filter->setSourceModel(model);
    sort_filter->sort (0);
    sort_filter->setFilterKeyColumn(-1);
    this->ui->allTableView->setModel( sort_filter );
    ui->allTableView->horizontalHeader()->resizeSections(QHeaderView::ResizeToContents);



}

TransactionWindow::~TransactionWindow()
{
    delete ui;
}

void TransactionWindow::on_tableView_activated(const QModelIndex &index)
{
    int row = index.row();
    float val = index.sibling(row, 1).data().toFloat();
    QString item = index.sibling(row,0).data().toString();

//    qDebug()<< "index is: " <<index;
//    qDebug()<< "row is: " <<row;


    qDebug() << "sender:" << TransactionWindow::sender;

    subTotal = subTotal + val;
    taxTotal = subTotal * salesTax;
    taxTotal = floor(taxTotal*100+0.5)/100;


    grandTotal = subTotal + taxTotal;
    grandTotal = floor(grandTotal*100+0.5)/100;



    qDebug()<<"Sub Total is: " <<subTotal;
    qDebug()<< "Tax Total is: " <<taxTotal;
    qDebug()<< "Grand Total is: " <<grandTotal;
    ui->subTotalLineEdit->setText(QString::number(subTotal));
    ui->taxLineEdit->setText(QString::number(taxTotal));
    ui->totalLineEdit->setText(QString::number(grandTotal));
}



static double extractDouble(const QString &s)
{
    QString num;
    foreach(QChar c, s) {
        if (c.isDigit() || c == '.' || c == '-') {
            num.append(c);
        }
    }
    bool ok;
    double ret = num.toDouble(&ok);
    if (ok) {
        return ret;
    } else {
        throw "Cannot extract double value";
    }
}

void TransactionWindow::on_searchBarLineEdit_textChanged(const QString &arg1)
{
    sort_filter->setFilterFixedString(arg1);
    matchingIndex = sort_filter->mapToSource(sort_filter->index(0,0));
    if(matchingIndex.isValid())
    {

    }
}

void TransactionWindow::transactionLoggedin()
{
    QSqlQuery qry;
//    qry2.prepare("INSERT INTO employee (first,last,id,email_address,address,ssn,phone_number,privilige,pin)"
//                 "VALUES (:first,:last,:id,:email_address,:address,:ssn,:phone_number,:privilige,:pin)");
//    qry2.bindValue(":first" ,first);
    qDebug() <<TransactionWindow::sender;
    qry.prepare("SELECT first,last FROM employee WHERE id = 2");
   // qry.bindValue(":id",TransactionWindow::sender);
    if(qry.exec())
    {
        ui->name->setText(qry.value(0).toString() +" " + qry.value(1).toString());
    }
}

void TransactionWindow::on_allTableView_activated(const QModelIndex &index)
{
    QString val = ui->allTableView->model()->data(index).toString();
    QSqlQuery qry;
    qDebug()<<val;
    qry.prepare("SELECT * FROM inventory WHERE name='"+val+"' or id='"+val+"' or quantity= '"+val+"' or price= '"+val+"' " );
    if(qry.exec())
    {
        while(qry.next())
        {
            AddRoot(qry.value(1).toString(),qry.value(4).toFloat(),qry.value(2).toString());


        }
        selectedName = ui->allTableView->model()->data(index).toString();
    }
        ui->treeWidget->resizeColumnToContents(0);
        ui->treeWidget->resizeColumnToContents(1);
        ui->treeWidget->resizeColumnToContents(2);

    int row = index.row();
    float val1 = index.sibling(row, 3).data().toFloat();
    //QString item = index.sibling(row,0).data().toString();

    qDebug()<< "index is: " <<index;
    qDebug()<< "row is: " <<row;



    subTotal = subTotal + val1;
    taxTotal = subTotal * salesTax;
    taxTotal = floor(taxTotal*100+0.5)/100;


    grandTotal = subTotal + taxTotal;
    grandTotal = floor(grandTotal*100+0.5)/100;




    ui->subTotalLineEdit->setText(QString::number(subTotal));
    ui->taxLineEdit->setText(QString::number(taxTotal));
    ui->totalLineEdit->setText(QString::number(grandTotal));

}
void TransactionWindow::AddRoot(QString name,float price,QString description)
{
    QTreeWidgetItem *item = new QTreeWidgetItem(ui->treeWidget);
    item->setText(0,name);
    item->setData(1,0,1);
    item->setData(2,0,price);
    ui->treeWidget->addTopLevelItem(item);
    AddChild(item,description);
}

void TransactionWindow::AddChild(QTreeWidgetItem *parent,QString description)
{
    QTreeWidgetItem *item = new QTreeWidgetItem();

    item->setText(0,description);
    parent->addChild(item);
}

void TransactionWindow::on_deleteButton_clicked()
{
    QTreeWidgetItem *item = ui->treeWidget->currentItem();
    //if(item)
        delete ui->treeWidget->takeTopLevelItem(matchingIndex.row());
}


void TransactionWindow::setSender(int source)
{
    TransactionWindow::sender = source;
}

int TransactionWindow::getSender()
{
    return sender;
}

void TransactionWindow::on_treeWidget_activated(const QModelIndex &index)
{
    matchingIndex = index;
}
