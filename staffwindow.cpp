#include "staffwindow.h"
#include "ui_staffwindow.h"
#include <dbmanager.h>
#include <QMessageBox>
#include <QDebug>

int one = 1;
int ID;
 QString selectedName;
StaffWindow::StaffWindow(QWidget *parent) : QWidget(parent), ui(new Ui::StaffWindow)
{
    ui->setupUi(this);
    //QAbstractItemModel *model = new QAbstractItemModel;

   // QTableView *tableView = ui->tableView;
    //tableView->setModel( model ); // SQL Database QAbstractItemModel model here

   // model->setHeaderData( 0, Qt::Horizontal, QObject::tr( "First Name") );
    //model->setHeaderData( 1, Qt::Horizontal, QObject::tr( "Last Name" ) );
    DbManager *dbmanager = new DbManager();

    this->model = new QSqlQueryModel();
    model->setQuery("SELECT [ID], [last], [first] FROM [main].[employee]");

    ui->tableView->setModel(model);




}

StaffWindow::~StaffWindow()
{
    delete ui;
}

// Input Popup and keyboard appears, input is sent to database.
void StaffWindow::AddButtonPressed()
{

}

// Employee removed from database and from the GUI table.
void StaffWindow::RemoveButtonPressed()
{

}

void StaffWindow::on_tableView_activated(const QModelIndex &index)
{

    QString val = ui->tableView->model()->data(index).toString();

    QSqlQuery qry;

    qry.prepare("SELECT * FROM employee WHERE first='"+val+"' or last='"+val+"' ");
    if(qry.exec())
    {
        while(qry.next())
        {

            ui->lineEdit_pin->setText(qry.value(5).toString());

            ui->lineEdit_address->setText(qry.value(3).toString());
            ui->lineEdit_email->setText(qry.value(6).toString());
            ui->lineEdit_phone->setText(qry.value(4).toString());

        }

        selectedName = ui->tableView->model()->data(index).toString();


    }





}

//void StaffWindow::on_pushButton_3_clicked()
//{

//    QString phone_number,address,email_address,PIN;
//    phone_number=ui->lineEdit_phone->text();
//    address=ui->lineEdit_address->text();
//    email_address=ui->lineEdit_email->text();
//    PIN=ui->lineEdit_pin->text();

//    QSqlQuery qry2;

//    qry2.prepare("insert into employee (phone_number,address,email_address,PIN) values ('"+phone_number+"','"+address+"','"+email_address+"','"+PIN+"')");

//    if(qry2.exec())
//    {
//      QMessageBox::critical(this,tr("Save"),tr("Saved"));

//    }
//    else
//    {
//        QMessageBox::critical(this,tr("error"),qry2.lastError().text());
//    }














//}



void StaffWindow::on_pushButton_ADD_clicked()
{
    QString first,last;
    first=ui->lineEdit_first->text();
    last=ui->lineEdit_last->text();
//    email_address=ui->lineEdit_email->text();
//    PIN=ui->lineEdit_pin->text();

    QSqlQuery qry2;

    int maxID;

    QSqlQuery query("SELECT ID FROM employee");
        while (query.next()) {
             maxID = query.value(0).toInt() ;

                qDebug() << "maxID is "<<maxID;
        }


     ID = (maxID)+ one;

    qDebug() << ID;

    qry2.prepare("insert into employee (first,last,ID) values ('"+first+"','"+last+"','"+ID+"')");








    if(qry2.exec())
    {
      QMessageBox::critical(this,tr("Save"),tr("Saved"));

    }
    else
    {
        QMessageBox::critical(this,tr("error"),qry2.lastError().text());
    }

    model->setQuery("SELECT [ID], [last], [first] FROM [main].[employee]");

}

void StaffWindow::on_pushButton_EDIT_clicked()
{
        QString phone_number,address,email_address,PIN;
        phone_number=ui->lineEdit_phone->text();
        address=ui->lineEdit_address->text();
        email_address=ui->lineEdit_email->text();
        PIN=ui->lineEdit_pin->text();

        QSqlQuery qry3;

        qry3.prepare("update employee set phone_number='"+phone_number+"',address='"+address+"',email_address='"+email_address+"',PIN='"+PIN+"' where phone_number='"+phone_number+"' or address='"+address+"' or email_address='"+email_address+"'");
  //  phone_number,address,email_address,PIN)
        if(qry3.exec())
        {
          QMessageBox::critical(this,tr("EDIT"),tr("UPDATED"));

        }
        else
        {
            QMessageBox::critical(this,tr("error"),qry3.lastError().text());
        }
}

void StaffWindow::on_pushButton_DELETE_clicked()
{
    QString phone_number,address,email_address,PIN,first;
    first=ui->lineEdit_last->text();
    phone_number=ui->lineEdit_phone->text();
    address=ui->lineEdit_address->text();
    email_address=ui->lineEdit_email->text();
    PIN=ui->lineEdit_pin->text();

    QSqlQuery qry4;

    if(selectedName.length()>1)
    {
        qry4.prepare("delete from employee where first='"+selectedName+"' or last='"+selectedName+"'   ");
        selectedName = "";

        if(qry4.exec())
        {
          QMessageBox::critical(this,tr("DELETE"),tr("DELETED"));
          model->setQuery("SELECT [ID], [last], [first] FROM [main].[employee]");
        }
        else
        {
            QMessageBox::critical(this,tr("error"),qry4.lastError().text());
        }


        return;
    //  phone_number,address,email_address,PIN)
    }

    qry4.prepare("delete from employee where first='"+first+"'   ");
//  phone_number,address,email_address,PIN)
    if(qry4.exec())
    {
      QMessageBox::critical(this,tr("DELETE"),tr("DELETED"));
      model->setQuery("SELECT [ID], [last], [first] FROM [main].[employee]");
    }
    else
    {
        QMessageBox::critical(this,tr("error"),qry4.lastError().text());
    }
}
