#ifndef STAFFWINDOW_H
#define STAFFWINDOW_H

//test4

#include <QWidget>
#include <QDialog>
#include <QtSql>
#include <pinnumpad.h>
#include <QListWidgetItem>
#include <QSortFilterProxyModel>
namespace Ui {
class StaffWindow;
}

class StaffWindow : public QWidget
{
    Q_OBJECT

public:
    explicit StaffWindow( QWidget *parent = 0 );

    ~StaffWindow();

private:
    Ui::StaffWindow *ui;
    QSqlQueryModel *model;
    PINNumPad * pinNumPad =NULL;
    void populateList();
    QSortFilterProxyModel *sort_filter;
    QModelIndex matchingIndex;
    void populateTable();

signals:
    void staffReturn();

private slots:



    void on_modifyPINButton_clicked();
    void on_searchLineEdit_textChanged(const QString &arg1);
    void on_confirmButton_clicked();
    void on_returnButton_clicked();
    void on_removeButton_clicked();
    void on_tableView_clicked(const QModelIndex &index);
};

#endif // STAFFWINDOW_H
