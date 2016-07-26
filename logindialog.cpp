#include "logindialog.h"
#include "ui_logindialog.h"
#include <QSignalMapper>
#include <dbmanager.h>
#include <transactionwindow.h>
#define DbManagerInstance Singleton<DbManager>::instance()
LoginDialog::LoginDialog(QWidget *parent ,const QString & loginSender) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    //receive signal of which button call numpad
    loginSender2 = loginSender;
    for ( int i = 0; i < ui->passwordButtonLayout->count(); i++ )
    {
        // Retrieve current widget, convert to QPushButton
        QWidget* widget = ui->passwordButtonLayout->itemAt( i )->widget();
        QPushButton* button = qobject_cast<QPushButton*>( widget );

        QString buttonText = button->text();
        // Connects this button to the lineEdit widget
        QString local = loginSender;
        if ( button )
        {
            if ( buttonText.compare( "Enter" ) == 0 )
            {
                connect( button, SIGNAL( clicked() ), this, SLOT( enterButtonPressed() ) );
            }
            else if ( buttonText.compare( "Back" ) == 0 )
            {
                connect( button, SIGNAL( clicked() ), this, SLOT( backButtonPressed() ) );
            }
            else
            {
                connect( button, SIGNAL( clicked() ), this, SLOT( keyboardButtonPressed() ) );
            }
        }
    }
}


LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::keyboardButtonPressed()
{
    QPushButton* button = qobject_cast<QPushButton*>( sender() );

    // Inserts text from button into lineEdit widget.
    if ( button )
    {
        QString currentText = ui->lineEdit->text();
            ui->lineEdit->setMaxLength( 4 );
        if ( currentText.length() > 4 )
        {
            ui->lineEdit->clear();
            ui->lineEdit->setEchoMode( QLineEdit::Password );
            ui->lineEdit->setMaxLength( 4 );
        }

        ui->lineEdit->insert( button->text() );
    }
}

void LoginDialog::enterButtonPressed()
{
    ui->lineEdit->setMaxLength( 4 );
    QPushButton* button = qobject_cast<QPushButton*>( sender() );
    QString currentText = ui->lineEdit->text();
    if ( button && currentText.length() == 4 )
    {
        //emit signal according to the caller
        if(passwordCheck(loginSender2))
        {
            ui->lineEdit->clear();
            ui->lineEdit->setEchoMode( QLineEdit::Password );

            if(loginSender2 == "staff")
            {
                emit staffLoggedin();
            }
            else if(loginSender2 == "report")
            {
                emit reportLoggedin();
            }
            else if(loginSender2 == "sale")
            {
                emit saleLoggin();
            }
            else if(loginSender2 == "inventory")
            {
                emit inventoryLogin();
            }
        }
    }
}

void LoginDialog::backButtonPressed()
{
    ui->lineEdit->clear();
    this->hide();
}

bool LoginDialog::passwordCheck(QString loginSender2)
{

    QString currentText = ui->lineEdit->text();

    bool correctPIN = false;
    //check for pin matches
    if ( DbManagerInstance.pinChecker(currentText,loginSender2))
    {
        ui->lineEdit->setMaxLength( 256 );
        ui->lineEdit->setEchoMode( QLineEdit::Normal );

        ui->lineEdit->setText("Success");
        correctPIN = true;

    }
    else
    {
        ui->lineEdit->setMaxLength( 256 );
        ui->lineEdit->setEchoMode( QLineEdit::Normal );
        ui->lineEdit->setText("Invalid PIN");
    }
    return correctPIN;
}

void LoginDialog::on_backButton_clicked()
{
   ui->lineEdit->setEchoMode( QLineEdit::Password );
}
