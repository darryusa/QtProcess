#include "staffwindow.h"
#include "ui_staffwindow.h"
#include <dbmanager.h>
#include <QMessageBox>
#include <QDebug>
#include <QSortFilterProxyModel>
int one = 1;
int ID;
 QString selectedName;
StaffWindow::StaffWindow(QWidget *parent) : QWidget(parent), ui(new Ui::StaffWindow)
{
    ui->setupUi(this);
    this->model = new QSqlQueryModel();
    model->setQuery("SELECT [ID], [last], [first], [phone_number] FROM [main].[employee]");
    sort_filter = new QSortFilterProxyModel(this);
    sort_filter->setSourceModel(model);
    sort_filter->sort (0);
    sort_filter->setFilterKeyColumn(-1);
    this->ui->tableView->setModel( sort_filter );


}


StaffWindow::~StaffWindow()
{
    delete ui;
}

// Input Popup and keyboard appears, input is sent to database.


void StaffWindow::on_tableView_activated(const QModelIndex &index)
{
    QString val = ui->tableView->model()->data(index).toString();
    QSqlQuery qry;
    qry.prepare("SELECT * FROM employee WHERE first='"+val+"' or last='"+val+"' ");
    if(qry.exec())
    {
        while(qry.next())
        {
            ui->firstNameLineEdit->setText(qry.value(1).toString());
            ui->lastNameLineEdit->setText(qry.value(2).toString());
            ui->addressLineEdit->setText(qry.value(3).toString());
            ui->phoneNumberLineEdit->setText(qry.value(4).toString());
            ui->emailAddressLineEdit->setText(qry.value(6).toString());
            ui->sSNLineEdit->setText(qry.value(8).toString());
            ui->managerRadioButton->setChecked((qry.value(7)!=1));
            ui->employeeRadioButton->setChecked((qry.value(7)==1));
        }
        selectedName = ui->tableView->model()->data(index).toString();
    }
}


void StaffWindow::on_searchLineEdit_textChanged(const QString &arg1)
{
    sort_filter->setFilterFixedString(arg1);
    matchingIndex = sort_filter->mapToSource(sort_filter->index(0,0));
    if(matchingIndex.isValid())
    {
      qDebug() << ui->searchLineEdit->text();
    }
    qDebug() << ui->searchLineEdit->text();
}

void StaffWindow::on_modifyPINButton_clicked()
{
    pinNumPad = new PINNumPad(this);
    pinNumPad->setModal(true);
    pinNumPad->show();
}


void StaffWindow::on_confirmButton_clicked()
{

    bool existed = false;
    QSqlQuery qry2;
    if(ui->lastNameLineEdit->text() != "" && ui->firstNameLineEdit->text() !="" && ui->addressLineEdit->text() !=""
            && ui->phoneNumberLineEdit->text()!= "" && ui->sSNLineEdit->text() !="")
    {      
        QString first,last,address,email,phoneNumber,SSN,PIN;
        int privilige;
        first = ui->firstNameLineEdit->text();
        last= ui->lastNameLineEdit->text();
        email = ui->emailAddressLineEdit->text();
        address = ui->addressLineEdit->text();
        SSN = ui->sSNLineEdit->text();
        phoneNumber = ui->phoneNumberLineEdit->text();
        if(pinNumPad != NULL)
            PIN = pinNumPad->getPIN();
        privilige = ui->employeeRadioButton->isChecked()? 1 : 2;
        QSqlQuery qry("SELECT ID, SSN,PIN,privilige FROM employee");
        if(PIN != NULL)
        {
            pinNumPad->deleteLater();
        }
        qDebug()<< PIN;
        int maxID;
        while (qry.next())
        {
            maxID = qry.value(0).toInt();
            if( qry.value(1) == SSN)
            {
                existed = true;
                PIN = qry.value(2).toString();
                privilige = qry.value(3).toInt();
            }
        }
//        int ID = (maxID)+ one;
        if(!existed)
        {
            QVariant newID = ID;
            qry2.prepare("INSERT INTO employee (first,last,id,email_address,address,ssn,phone_number,privilige,pin)"
                         "VALUES (:first,:last,:id,:email_address,:address,:ssn,:phone_number,:privilige,:pin)");
            qry2.bindValue(":first" ,first);
            qry2.bindValue(":last",last);
            qry2.bindValue(":id", ID);
            qry2.bindValue(":email_address",email);
            qry2.bindValue(":ssn",SSN);
            qry2.bindValue(":phone_number",phoneNumber);
            qry2.bindValue(":address",address);
            qry2.bindValue(":privilige", privilige);
            qry2.bindValue(":pin", PIN);         

            if(qry2.exec())
            {
                QMessageBox::critical(this,tr("Save"),tr("Saved"));

            }
            else
            {
                QMessageBox::critical(this,tr("Error"),qry2.lastError().text());
            }

        }
        else
        {
            QSqlQuery qry3;
            qry3.prepare("UPDATE employee SET first =:first,last =:last,email_address =:email_address,address =:address,"
                         "phone_number =:phone_number,privilige =:privilige,pin =:pin WHERE ssn=:ssn");

            if(pinNumPad != NULL)
            {
                PIN = pinNumPad->getPIN();
            }
            qry3.bindValue(":first" ,first);
            qry3.bindValue(":last",last);
            qry3.bindValue(":email_address",email);
            qry3.bindValue(":ssn",SSN);
            qry3.bindValue(":phone_number",phoneNumber);
            qry3.bindValue(":address",address);
            qry3.bindValue(":privilige", privilige);
            qry3.bindValue(":pin",PIN);

            QMessageBox::information(this,"", SSN);
            if(qry3.exec())
            {
                QMessageBox::critical(this,tr("Save"),tr("Saved"));

            }
            else
            {
                QMessageBox::critical(this,tr("Error"),qry3.lastError().text());
            }
        }
    }
    else
        QMessageBox::warning(this,"WARNING","One of the field might be blank");


    model->setQuery("SELECT [ID], [last], [first], [phone_number] FROM [main].[employee]");
}

void StaffWindow::on_returnButton_clicked()
{

    emit staffReturn();
}

void StaffWindow::on_removeButton_clicked()
{
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

    }
}
