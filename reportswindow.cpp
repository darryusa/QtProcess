#include "reportswindow.h"
#include "ui_reportswindow.h"

ReportsWindow::ReportsWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ReportsWindow)
{
    ui->setupUi(this);

   // ui->startDateCal->selectedDate()
}

ReportsWindow::~ReportsWindow()
{
    delete ui;
}

void ReportsWindow::on_generateButton_clicked()
{

}
