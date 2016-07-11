#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QWidget>

namespace Ui {
class LoginWindow;
}

class LoginWindow : public QWidget
{
    Q_OBJECT

public:
    explicit LoginWindow(QWidget *parent = 0);
    ~LoginWindow();

signals:
    void logIn();

private:
    Ui::LoginWindow *ui;
    void passwordCheck();

private slots:
    void keyboardButtonPressed();
    void enterButtonPressed();
    void backButtonPressed();
};

#endif // LOGINWINDOW_H
