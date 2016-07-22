#ifndef TRANSACTIONWINDOW_H
#define TRANSACTIONWINDOW_H

#include <QWidget>
#include <QDialog>
#include <QtSql>
#include <qsortfilterproxymodel.h>
#include <QTreeWidgetItem>

namespace Ui {
class TransactionWindow;
}

class TransactionWindow : public QWidget
{
    Q_OBJECT

public:
    explicit TransactionWindow(QWidget *parent = 0);
    ~TransactionWindow();
    static void setSender(int source);
    static int getSender();


private slots:
    void on_tableView_activated(const QModelIndex &index);

    void transactionLoggedin();

    void on_searchBarLineEdit_textChanged(const QString &arg1);

    void on_allTableView_activated(const QModelIndex &index);

    void on_deleteButton_clicked();

    void on_treeWidget_activated(const QModelIndex &index);

private:
    int static sender;
    Ui::TransactionWindow *ui;
    QSqlQueryModel *model;
    void populateTables();
    QSortFilterProxyModel *sort_filter;
    QModelIndex matchingIndex;
    void AddRoot(QString name,float price,QString description);
    void AddChild(QTreeWidgetItem *parent,QString description);
    QString selectedName;
};

#endif // TRANSACTIONWINDOW_H
