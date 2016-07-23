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

signals:
    void returnToMain();
private slots:


    void transactionLoggedin();

    void on_searchBarLineEdit_textChanged(const QString &arg1);

    void on_deleteButton_clicked();

    void on_allTableView_clicked(const QModelIndex &index);

    void on_treeWidget_clicked(const QModelIndex &index);

    void on_checkoutButton_clicked();

    void on_returnButton_2_clicked();

private:
    void updateTotal(double val1);
    int static sender;
    Ui::TransactionWindow *ui;  
    void populateTables();
    QSqlQueryModel *model;
    QSortFilterProxyModel *sort_filter;
    QModelIndex matchingIndex;
    void AddRoot(QString name,double price,QString description,int id);
    void AddChild(QTreeWidgetItem *parent,QString description);
    QString selectedName;
    double subTotal;
    double grandTotal;
    double salesTax = .06;
    double taxTotal;
    void updateDatabase();
    void clearDesk();
    QVariantList updateId;
    QVariantList updateQuantity;
    QVariantList originalQuantity;

};

#endif // TRANSACTIONWINDOW_H
