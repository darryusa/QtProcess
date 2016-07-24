#ifndef REPORTSWINDOW_H
#define REPORTSWINDOW_H

#include <QWidget>
#include <qsqlquerymodel.h>
#include <qsortfilterproxymodel.h>
namespace Ui {
class ReportsWindow;
}

class ReportsWindow : public QWidget
{
    Q_OBJECT

public:
    explicit ReportsWindow(QWidget *parent = 0);
    ~ReportsWindow();

private slots:
    void on_generateButton_clicked();

    void on_timePeriodBox_currentIndexChanged(int index);

    void on_returnButton_clicked();
signals:
    void returnFromReport();
private:
    Ui::ReportsWindow *ui;
    QSqlQueryModel *model;
    QSortFilterProxyModel *sort_filter;
    void init();
    double sale,saleTax,total;
};

#endif // REPORTSWINDOW_H
