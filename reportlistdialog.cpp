#include "reportlistdialog.h"
#include "ui_reportlistdialog.h"
#include <dbmanager.h>

ReportListDialog::ReportListDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ReportListDialog)
{
    ui->setupUi(this);

    DbManager *dbmanager = new DbManager();



    this->model = new QSqlQueryModel();
    model->setQuery("SELECT [ID], [first], [last], [address], [phone_number], [PIN], [email_address] FROM [main].[employee]");

    ui->tableView->setModel(model);

}

ReportListDialog::~ReportListDialog()
{
    delete ui;
}
