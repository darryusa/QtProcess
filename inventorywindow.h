#ifndef INVENTORYWINDOW_H
#define INVENTORYWINDOW_H

#include <QWidget>
#include <qsqlquerymodel.h>
#include <qsortfilterproxymodel.h>
#include <itemmodify.h>

namespace Ui {
class InventoryWindow;
}

class InventoryWindow : public QWidget
{
    Q_OBJECT

public:
    explicit InventoryWindow(QWidget *parent = 0);
    ~InventoryWindow();
    static void setSender(bool source);
    static bool getSender();
    static void setSelectedName(QString source);
    static QString getSelectedName();
signals:
    void inventoryReturn();
private slots:

    void returnedFromItemModify();

    void on_searchLineEdit_textChanged(const QString &arg1);

    void on_tableView_clicked(const QModelIndex &index);

    void on_removeButton_clicked();

    void on_addButton_clicked();

    void on_editButton_clicked();

    void on_returnButton_clicked();

private:
    QString static selectedName;
    bool static modifyItem;
    Ui::InventoryWindow *ui;
    void populateTable();
    QSqlQueryModel *model;
    QSortFilterProxyModel *sort_filter;
    ItemModify * itemModify;
};

#endif // INVENTORYWINDOW_H
