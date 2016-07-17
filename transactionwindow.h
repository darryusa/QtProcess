#ifndef TRANSACTIONWINDOW_H
#define TRANSACTIONWINDOW_H

#include <QWidget>
#include <QDialog>
#include <QtSql>
//trans test 2
//trans test 3
namespace Ui {
class TransactionWindow;
}

class TransactionWindow : public QWidget
{
    Q_OBJECT

public:
    explicit TransactionWindow(QWidget *parent = 0);
    ~TransactionWindow();

private slots:
    void on_tableView_activated(const QModelIndex &index);

    void on_pushButton_clicked();

private:
    Ui::TransactionWindow *ui;
    QSqlQueryModel *model;
};

#endif // TRANSACTIONWINDOW_H
