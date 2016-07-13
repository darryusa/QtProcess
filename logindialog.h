#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>

namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = 0);
    ~LoginDialog();
signals:
    void logIn();
private:
    Ui::LoginDialog *ui;
    void passwordCheck();
private slots:
    void keyboardButtonPressed();
    void enterButtonPressed();
    void backButtonPressed();
};

#endif // LOGINDIALOG_H
