#ifndef STAFFWINDOW_H
#define STAFFWINDOW_H

//test4

#include <QWidget>
#include <QDialog>
#include <QtSql>

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

private slots:
    void RemoveButtonPressed();
    void AddButtonPressed();
    void on_tableView_activated(const QModelIndex &index);
    void on_pushButton_3_clicked();
    void on_pushButton_ADD_clicked();
    void on_pushButton_EDIT_clicked();
    void on_pushButton_DELETE_clicked();
};

#endif // STAFFWINDOW_H
