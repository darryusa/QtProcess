#include "reportswindow.h"
#include "ui_reportswindow.h"
#include "qsqlquery.h"
ReportsWindow::ReportsWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ReportsWindow)
{
    ui->setupUi(this);
    init();

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

void ReportsWindow::init()
{
    //initialize tables
    this->model = new QSqlQueryModel();
    QString start = ui->startCustomDate->text();
    QString end = ui->endCustomDate->text();
    ui->customDateWidget->hide();
    sort_filter = new QSortFilterProxyModel(this);
    sort_filter->setSourceModel(model);
    sort_filter->sort (0);
    sort_filter->setFilterKeyColumn(-1);
    this->ui->tableView->setModel( sort_filter );
    ui->tableView->horizontalHeader()->resizeSections(QHeaderView::ResizeToContents);
}

ReportsWindow::~ReportsWindow()
{
    delete ui;
}

void ReportsWindow::on_generateButton_clicked()
{
    //display items according to which report user want
    QString startDate;
    QString endDate;
    if(ui->timePeriodBox->currentIndex() == 0)
    {
        startDate = QDateTime::currentDateTime().toString("yyyy-MM-dd");
        endDate = QDateTime::currentDateTime().addDays(1).toString("yyyy-MM-dd");

    }
    else if(ui->timePeriodBox->currentIndex() == 1)
    {
        startDate = QDateTime::currentDateTime().addDays(-1).toString("yyyy-MM-dd");
        endDate = QDateTime::currentDateTime().toString("yyyy-MM-dd");
    }
    else if(ui->timePeriodBox->currentIndex() == 2)
    {
        int date = (QDate::currentDate().dayOfWeek() *-1) +1;

        startDate = QDateTime::currentDateTime().addDays(date).toString("yyyy-MM-dd");
        endDate =QDateTime::currentDateTime().toString("yyyy-MM-dd");

    }
    else if(ui->timePeriodBox->currentIndex() == 3)
    {
        int date = (QDate::currentDate().dayOfWeek() * -1) + 1;

        endDate = QDateTime::currentDateTime().addDays(date).toString("yyyy-MM-dd");
        startDate = QDateTime::currentDateTime().addDays(date-7).toString("yyyy-MM-dd");
    }
    else if(ui->timePeriodBox->currentIndex() == 4)
    {
        startDate = ui->startCustomDate->text();
        endDate  = ui->endCustomDate->text();
    }

    model->setQuery("SELECT * FROM [main].[transactions] where times BETWEEN '"+startDate+"' AND '"+endDate+"' "   );
    QSqlQuery qry;
    qry.prepare("SELECT sale,sale_tax,total FROM [main].[transactions] where times BETWEEN '"+startDate+"' AND '"+endDate+"' ");
    if(qry.exec())
    {
        while(qry.next())
        {
            sale += extractDouble(qry.value(0).toString());
            saleTax += extractDouble(qry.value(1).toString());
            total += extractDouble(qry.value(2).toString());
        }
    }

    ui->TaxTotalEdit->setText(QString::number(saleTax));
    ui->salesTaxTotalEdit->setText(QString::number(total));
    ui->salesTotalEdit->setText(QString::number(sale));
}
    // display custom date when user choose custom
void ReportsWindow::on_timePeriodBox_currentIndexChanged(int index)
{
    if(index == 4)
    {
        ui->customDateWidget->show();
    }
    else
        ui->customDateWidget->hide();

}


void ReportsWindow::on_returnButton_clicked()
{
    //clear everything
    model->clear();
    ui->salesTaxTotalEdit->clear();
    ui->salesTotalEdit->clear();
    ui->TaxTotalEdit->clear();
    emit returnFromReport();
}
