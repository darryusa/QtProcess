#ifndef STAFFWINDOW_H
#define STAFFWINDOW_H

//test4

#include <QWidget>
#include <QDialog>
#include <QtSql>
#include <pinnumpad.h>
#include <QListWidgetItem>
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
    PINNumPad * pinNumPad;
    void populateList();



private slots:
    void RemoveButtonPressed();
    void AddButtonPressed();
    void on_tableView_activated(const QModelIndex &index);
    void on_pushButton_3_clicked();
    void on_pushButton_ADD_clicked();
    void on_pushButton_EDIT_clicked();
    void on_pushButton_DELETE_clicked();
    void on_pushButton_6_clicked();
    void on_modifyPINButton_clicked();
    void on_listWidget_activated(const QModelIndex &index);

    void on_listWidget_itemClicked(QListWidgetItem *item);
};

#endif // STAFFWINDOW_H
