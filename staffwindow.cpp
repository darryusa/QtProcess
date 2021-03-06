#include "staffwindow.h"
#include "ui_staffwindow.h"
#include <QMessageBox>
#include <QSortFilterProxyModel>
int one = 1;
int ID;
 QString selectedName;
StaffWindow::StaffWindow(QWidget *parent) : QWidget(parent), ui(new Ui::StaffWindow)
{
    ui->setupUi(this);
    populateTable();

}

void StaffWindow::populateTable()
{
    //initialize table
    this->model = new QSqlQueryModel();
    model->setQuery("SELECT ID, last, first, phone_number FROM employee");
    sort_filter = new QSortFilterProxyModel(this);
    sort_filter->setSourceModel(model);
    sort_filter->sort (0);
    sort_filter->setFilterKeyColumn(-1);
    this->ui->tableView->setModel( sort_filter );
    ui->tableView->horizontalHeader()->resizeSections(QHeaderView::ResizeToContents);

}

StaffWindow::~StaffWindow()
{
    delete ui;
}




void StaffWindow::on_searchLineEdit_textChanged(const QString &arg1)
{
    sort_filter->setFilterFixedString(arg1);
    matchingIndex = sort_filter->mapToSource(sort_filter->index(0,0));


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
        // fail safe check for pin pad
        if(pinNumPad != NULL)
            PIN = pinNumPad->getPIN();
        privilige = ui->employeeRadioButton->isChecked()? 1 : 2;
        QSqlQuery qry("SELECT ID, SSN,PIN,privilige FROM employee");
        //remove pinpad
        if(PIN != "")
        {
            pinNumPad->deleteLater();
            pinNumPad = NULL;
        }

        while (qry.next())
        {
            //check to see if employee is already exist by SSN
            if( qry.value(1) == SSN)
            {
                existed = true;
                PIN = qry.value(2).toString();
                privilige = qry.value(3).toInt();
            }
        }
        // if not existed then insert to database
        if(!existed)
        {
            qry2.prepare("INSERT INTO employee (first,last,email_address,address,ssn,phone_number,privilige,pin)"
                         "VALUES (:first,:last,:email_address,:address,:ssn,:phone_number,:privilige,:pin)");
            qry2.bindValue(":first" ,first);
            qry2.bindValue(":last",last);
            qry2.bindValue(":email_address",email);
            qry2.bindValue(":ssn",SSN);
            qry2.bindValue(":phone_number",phoneNumber);
            qry2.bindValue(":address",address);
            qry2.bindValue(":privilige", privilige);
            qry2.bindValue(":pin", PIN);

            if(qry2.exec())
            {
                QMessageBox::critical(this,tr("Save"),tr("Saved"));
                PIN = "";
            }
            else
            {
                QMessageBox::critical(this,tr("Error"),qry2.lastError().text());
            }

        }
        //if existed then update database
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


            if(qry3.exec())
            {
                QMessageBox::critical(this,tr("Save"),tr("Saved"));
                PIN = "";
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
    QMessageBox::StandardButton reply;
    //display message box to confirm deleteion
    reply = QMessageBox::question(this,"Warning","remove a person, Continue?",QMessageBox::Yes | QMessageBox::No);
    if(reply == QMessageBox::Yes)
    {
        if(selectedName.length()>1)
        {
            qry4.prepare("delete from employee where first='"+selectedName+"' or last='"+selectedName+"'   ");
            selectedName = "";

            if(qry4.exec())
            {
              QMessageBox::critical(this,tr("DELETE"),tr("DELETED"));
              model->setQuery("SELECT [ID], [last], [first],[phone_number] FROM [main].[employee]");
            }
            else
            {
                QMessageBox::critical(this,tr("error"),qry4.lastError().text());
            }

        }
    }
}


void StaffWindow::on_tableView_clicked(const QModelIndex &index)
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
