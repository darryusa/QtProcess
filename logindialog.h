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
    explicit LoginDialog(QWidget *parent = 0,const QString & loginSender = "");
    ~LoginDialog();
    QString loginSender2 ="";
signals:
    void staffClicked();
    void staffLoggedin();
    void reportLoggedin();
    void reportLogin();

private:
    Ui::LoginDialog *ui;
    bool passwordCheck();
private slots:
    void keyboardButtonPressed();
    void enterButtonPressed();
    void backButtonPressed();
    void on_pushButtonEnter_clicked();
};

#endif // LOGINDIALOG_H
