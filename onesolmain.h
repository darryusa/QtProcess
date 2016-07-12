#ifndef ONESOLMAIN_H
#define ONESOLMAIN_H

#include <QWidget>
#include <QStackedWidget>
#include <loginwindow.h>
#include <staffwindow.h>

class OneSolMain : public QWidget
{
    Q_OBJECT

public:
    OneSolMain(QWidget *parent = 0);
    ~OneSolMain();

private:
    QStackedWidget *stackedWidget;
    LoginWindow *loginWindow;
    StaffWindow *staffWindow;

private slots:
    void UserLoggedIn();
};

#endif // ONESOLMAIN_H