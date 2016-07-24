#include "transactionwindow.h"
#include "ui_transactionwindow.h"
#include <QMessageBox>
#include <QDebug>
#include <qtreewidgetitemiterator.h>

int TransactionWindow::sender;


static double extractDouble(const QString &s);

TransactionWindow::TransactionWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TransactionWindow)
{
    ui->setupUi(this);

    populateTables();
    ui->treeWidget->setColumnCount(4);

}

void TransactionWindow::populateTables()
{
    this->model = new QSqlQueryModel();
    model->setQuery("SELECT [ID], [name], [quantity], [price] FROM [main].[inventory] WHERE quantity != 0");
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



static double extractDouble(const QString &s)
{
    QString num;
    foreach(QChar c, s) {
        if (c.isDigit() || c == '.' || c == '-') {
            num.append(c);
        }
    }
    bool ok;
    double ret = num.toFloat(&ok);
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


    qry.prepare("SELECT first,last FROM employee WHERE id=(:id)");
    qry.bindValue(":id",TransactionWindow::sender);
    if(qry.exec())
    {
        if(qry.first())
        {
            ui->name->setText(qry.value(0).toString() + " " + qry.value(1).toString());
        }
    }
}


void TransactionWindow::AddRoot(QString name,double price,QString description,int id)
{
    QTreeWidgetItemIterator it(ui->treeWidget);
    while (*it)
    {
        if((*it)->data(0,0).value<int>() == id)
        {

            int temp = (*it)->data(2,0).value<int>() +1;

            (*it)->setData(2,0,temp);
            updateTotal(price);
            return;
        }
        ++it;
    }

    QTreeWidgetItem *item = new QTreeWidgetItem(ui->treeWidget);
    item->setData(0,0,id);
    item->setText(1,name);
    item->setData(2,0,1);
    item->setData(3,0,price);
    ui->treeWidget->addTopLevelItem(item);
    AddChild(item,description);
    updateTotal(price);
}

void TransactionWindow::AddChild(QTreeWidgetItem *parent,QString description)
{
    QTreeWidgetItem *item = new QTreeWidgetItem();

    item->setText(0,description);
    parent->addChild(item);





}
void TransactionWindow::updateTotal(double val1)
{

    subTotal = subTotal + val1;
    subTotal = floor(subTotal*100+0.5)/100;
    taxTotal = subTotal * salesTax;
    taxTotal = floor(taxTotal*100+0.5)/100;


    grandTotal = subTotal + taxTotal;
    grandTotal = floor(grandTotal*100+0.5)/100;
    ui->subTotalLineEdit->setText(QString::number(subTotal));
    ui->taxLineEdit->setText(QString::number(taxTotal));
    ui->totalLineEdit->setText(QString::number(grandTotal));
}

void TransactionWindow::on_deleteButton_clicked()
{
    QTreeWidgetItem *item = ui->treeWidget->currentItem();

    if(item && !item->parent())
    {
        double price = -1 * extractDouble(item->data(3,0).toString()) * item->data(2,0).value<int>();
        updateTotal(price);
        if(item->parent() == NULL)
            delete item;
    }

}


void TransactionWindow::setSender(int source)
{
    TransactionWindow::sender = source;
}

int TransactionWindow::getSender()
{
    return sender;
}



void TransactionWindow::on_allTableView_clicked(const QModelIndex &index)
{
    QString val = ui->allTableView->model()->data(index).toString();
    QSqlQuery qry;

    qry.prepare("SELECT * FROM inventory WHERE name='"+val+"' or id='"+val+"' or quantity= '"+val+"' or price= '"+val+"' " );
    if(qry.exec())
    {
        if(qry.first())
        {
            AddRoot(qry.value(1).toString(),qry.value(4).toFloat(),qry.value(2).toString(),qry.value(0).value<int>());
        }
        selectedName = ui->allTableView->model()->data(index).toString();
    }
        ui->treeWidget->resizeColumnToContents(0);
        ui->treeWidget->resizeColumnToContents(1);
        ui->treeWidget->resizeColumnToContents(2);
        ui->treeWidget->resizeColumnToContents(3);


}

void TransactionWindow::on_treeWidget_clicked(const QModelIndex &index)
{
    matchingIndex = index;
}

void TransactionWindow::on_checkoutButton_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this,"Confirm","Continue checking out?",QMessageBox::Yes | QMessageBox::No);
    if( reply == QMessageBox::Yes)
    {
        updateDatabase();
    }
}
void TransactionWindow::updateDatabase()
{
    QString date = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");
    QSqlQuery qry;
    qry.prepare("INSERT INTO transactions (times, employee, sale, sale_tax, total)"
                 "VALUES (:times, :employee, :sale, :sale_tax, :total)");
    qry.bindValue(":times" , date);
    qry.bindValue(":employee", ui->name->text());
    qry.bindValue(":sale",subTotal);
    qry.bindValue(":sale_tax",taxTotal);
    qry.bindValue(":total",grandTotal);

    if(qry.exec())
    {
        QTreeWidgetItemIterator it(ui->treeWidget);
        while (*it)
        {
            if((*it)->data(0,0).value<int>() != 0)
            {
                updateId << (*it)->data(0,0).value<int>();
                updateQuantity << (*it)->data(2,0).value<int>();
            }
            ++it;
        }

        QSqlQuery qry3;

        qry3.prepare("UPDATE inventory SET quantity=quantity - (:quantity) WHERE ID=:id");

        for(int i = 0;i<updateId.length();i++)
        {
            qry3.bindValue(":quantity",updateQuantity.at(i).value<int>());
            qry3.bindValue(":id",updateId.at(i).value<int>());

            if(!qry3.exec()) qDebug() << qry3.lastError();
        }
        qry.exec("SELECT id FROM transactions");
        qry.last();
        int transID = qry.value(0).value<int>();

        qry.prepare("INSERT INTO items_sold (transID, itemID,quantity)"
                     "VALUES (:transID,:itemID,:quantity)");
        for(int i =0; i < updateId.length(); i++)
        {
            qry.bindValue(":transID" , transID);
            qry.bindValue(":itemID", updateId.at(i).value<int>());
            qry.bindValue(":quantity",updateQuantity.at(i).value<int>());
            if (!qry.exec()) qDebug()<< qry.lastError();

        }
        clearDesk();
        emit returnToMain();
    }

    else
    {
        QMessageBox::critical(this,tr("Error"),qry.lastError().text());
    }

}
void TransactionWindow::clearDesk()
{
    ui->treeWidget->clear();
    subTotal = 0;
    grandTotal = 0;
    taxTotal = 0;
    ui->subTotalLineEdit->setText(0);
    ui->totalLineEdit->setText(0);
    ui->taxLineEdit->setText(0);
}

void TransactionWindow::on_returnButton_2_clicked()
{
    clearDesk();
    emit returnToMain();
}
