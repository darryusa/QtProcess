#ifndef REPORTLISTDIALOG_H
#define REPORTLISTDIALOG_H

#include <QDialog>
#include <QtSql>

namespace Ui {
class ReportListDialog;
}

class ReportListDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ReportListDialog(QWidget *parent = 0);
    ~ReportListDialog();

private:
    Ui::ReportListDialog *ui;
    QSqlQueryModel *model;
};

#endif // REPORTLISTDIALOG_H
