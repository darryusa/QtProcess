#include "logindialog.h"
#include "ui_logindialog.h"
#include <dbmanager.h>
#include <QDebug>
#include <QSignalMapper>

LoginDialog::LoginDialog(QWidget *parent ,const QString & loginSender) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);

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

        if(passwordCheck())
        {
            if(loginSender2 == "staff")
            {
                emit staffLoggedin();
//                connect(oneSolMain::Instance(),SIGNAL(staffLogin()),oneSolMain::Instance(),SLOT(staffSlotLoggedin()));
            }
        }
    }
}

void LoginDialog::backButtonPressed()
{
    QPushButton* button = qobject_cast<QPushButton*>( sender() );

    if ( button && ui->lineEdit->text().length() <= 4 )
    {
        ui->lineEdit->backspace();
    }
}

bool LoginDialog::passwordCheck()
{

    QString currentText = ui->lineEdit->text();
    DbManager *dbmanager = new DbManager("../processDB");
    bool correctPIN = false;
    // Password: "0000" for testing. Check database here.
    if ( dbmanager->pinChecker(currentText))
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