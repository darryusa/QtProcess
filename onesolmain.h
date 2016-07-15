#ifndef ONESOLMAIN_H
#define ONESOLMAIN_H

#include <QWidget>
#include <QStackedWidget>
#include <staffwindow.h>
#include <menuwindow.h>
#include <singleton.h>
#include <logindialog.h>
class OneSolMain : public QWidget
{
    Q_OBJECT

public:
    OneSolMain(QWidget *parent = 0);
    ~OneSolMain();

private:
    QStackedWidget *stackedWidget;
    StaffWindow *staffWindow;
    MenuWindow *menuWindow;
    LoginDialog * loginReport;
    LoginDialog * loginStaff;
signals:
    void staffLogin();
private slots:
    void UserLoggedIn();
    void reportButtonClicked();
    void staffSlotLoggedin();
    void staffClick();
};
typedef Singleton<OneSolMain> oneSolMain;
#endif // ONESOLMAIN_H
