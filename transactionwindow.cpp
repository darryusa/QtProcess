#include "transactionwindow.h"
#include "ui_transactionwindow.h"
#include <dbmanager.h>
#include <QMessageBox>
#include <QDebug>



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
    ui->treeWidget->setColumnCount(2);
     //ui->tableView->setModel(model);

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
    ui->treeWidget->header()->resizeSections(QHeaderView::ResizeToContents);

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

    qDebug()<< "index is: " <<index;
    qDebug()<< "row is: " <<row;




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

void TransactionWindow::on_pushButton_clicked()
{
   // ui->listWidget->currentItem()->;
  // QString str = ui->listWidget->currentItem()->text();
   //qDebug()<< "str is" <<str;

//   for(int i=0;i<val.length();i++)
//   {
//       if val.
//   }
//   float val;
//   val = extractDouble(str);

 //   qDebug()<< "val is" <<val;
   //subTotal = subTotal - val;
//   taxTotal = subTotal * salesTax;
//   taxTotal = floor(taxTotal*100+0.5)/100;

//   grandTotal = subTotal + taxTotal;
//   grandTotal = floor(grandTotal*100+0.5)/100;

//   if(subTotal<.5)
//   {
//       subTotal = 0;
//       taxTotal = 0;
//       grandTotal = 0;
//   }
   /*ui->lineEdit_subTotal->setText(QString::number(subTotal));
   ui->lineEdit_2_tax->setText(QString::number(taxTotal));
   ui->lineEdit_3_grandTotal->setText(QString::number(grandTotal));
    qDeleteAll(ui->listWidget->selectedItems());
    */

//     qDebug()<< "Sub Total is: " <<subTotal;
//     qDebug()<< "Tax Total is: " <<taxTotal;
//     qDebug()<< "Grand Total is: " <<grandTotal;
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

void TransactionWindow::on_allTableView_activated(const QModelIndex &index)
{
    QString val = ui->allTableView->model()->data(index).toString();
    QSqlQuery qry;
    qry.prepare("SELECT * FROM inventory WHERE name='"+val+"' or id='"+val+"' or quantity= '"+val+"' or price= '"+val+"' " );
    if(qry.exec())
    {
        while(qry.next())
        {
            AddRoot(qry.value(1).toString(),qry.value(4).toFloat(),qry.value(2).toString());


        }
        selectedName = ui->allTableView->model()->data(index).toString();
    }

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
    item->setData(1,0,price);
    ui->treeWidget->addTopLevelItem(item);
    AddChild(item,description);
}

void TransactionWindow::AddChild(QTreeWidgetItem *parent,QString description)
{
    QTreeWidgetItem *item = new QTreeWidgetItem();

    item->setText(1,description);
    parent->addChild(item);
}

void TransactionWindow::on_deleteButton_clicked()
{
    //if(matchingIndex != NULL)
    {
        //ui->treeWidget->removeItemWidget(matchingIndex.);
    }
}

void TransactionWindow::on_treeWidget_activated(const QModelIndex &index)
{
    matchingIndex = index;
}
