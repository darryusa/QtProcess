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

    DbManager *dbmanager = new DbManager();

    this->model = new QSqlQueryModel();
    model->setQuery("SELECT [name], [price] FROM [main].[inventory]");

     ui->tableView->setModel(model);

}

TransactionWindow::~TransactionWindow()
{
    delete ui;
}

void TransactionWindow::on_tableView_activated(const QModelIndex &index)
{
    int row = index.row();
//    int val = ui->tableView->model()->data(index).toInt();
    float val = index.sibling(row, 1).data().toFloat();
    QString item = index.sibling(row,0).data().toString();

    qDebug()<< "index is: " <<index;
    qDebug()<< "row is: " <<row;

//    QSqlQuery qry;

//        qry.prepare("SELECT * FROM employee WHERE first='"+val+"' or last='"+val+"' ");
//        if(qry.exec())
//        {
//            while(qry.next())
//            {

//                ui->lineEdit_pin->setText(qry.value(5).toString());

//                ui->lineEdit_address->setText(qry.value(3).toString());
//                ui->lineEdit_email->setText(qry.value(6).toString());
//                ui->lineEdit_phone->setText(qry.value(4).toString());

//            }

//            selectedName = ui->tableView->model()->data(index).toString();


//        }

  //  ui->listWidget->addItem(item + " \t" + QString::number(val));
  //  ui->listWidget->addItem(QString::number(item));


    subTotal = subTotal + val;
    taxTotal = subTotal * salesTax;
    taxTotal = floor(taxTotal*100+0.5)/100;


    grandTotal = subTotal + taxTotal;
    grandTotal = floor(grandTotal*100+0.5)/100;



    qDebug()<<"Sub Total is: " <<subTotal;
    qDebug()<< "Tax Total is: " <<taxTotal;
    qDebug()<< "Grand Total is: " <<grandTotal;
//    ui->lineEdit_subTotal->setText(QString::number(subTotal));
//    ui->lineEdit_2_tax->setText(QString::number(taxTotal));
//    ui->lineEdit_3_grandTotal->setText(QString::number(grandTotal));
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
