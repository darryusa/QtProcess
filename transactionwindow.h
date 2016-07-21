#ifndef TRANSACTIONWINDOW_H
#define TRANSACTIONWINDOW_H

#include <QWidget>
#include <QDialog>
#include <QtSql>
#include <qsortfilterproxymodel.h>
#include <QTreeWidgetItem>
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

    void on_searchBarLineEdit_textChanged(const QString &arg1);

    void on_allTableView_activated(const QModelIndex &index);

    void on_deleteButton_clicked();

    void on_treeWidget_activated(const QModelIndex &index);

private:
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
