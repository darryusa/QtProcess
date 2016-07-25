#ifndef ONESOLMAIN_H
#define ONESOLMAIN_H

#include <QWidget>
#include <QStackedWidget>
#include <staffwindow.h>
#include <menuwindow.h>
#include <reportswindow.h>
#include <singleton.h>
#include <logindialog.h>
#include <transactionwindow.h>
#include <inventorywindow.h>
#include <mainwindow.h>
class OneSolMain : public QWidget
{
    Q_OBJECT

public:
    OneSolMain(QWidget *parent = 0);
    ~OneSolMain();

private:

    QStackedWidget *stackedWidget;
    StaffWindow *staffWindow;
    MainWindow *menuWindow;
    ReportsWindow *reportsWindow;
    TransactionWindow * transactionWindow;
    InventoryWindow * inventoryWindow;
    LoginDialog * loginReport;
    LoginDialog * loginStaff;
    LoginDialog * loginSale;
    LoginDialog * loginInventory;


signals:
    void staffLogin();
    void reportLogin();
    void saleLogginSignal();


private slots:
    void UserLoggedIn();
    void reportButtonClicked();
    void staffSlotLoggedin();
    void staffClick();
    void reportSlotLoggedin();
    void saleClicked();
    void saleLogginSlot();
    void staffReturned();
    void returnFromTransactionSlot();
    void inventoryClicked();
    void inventoryLoggedin();
    void returnFromReportSlot();

};
typedef Singleton<OneSolMain> oneSolMain;
#endif // ONESOLMAIN_H
