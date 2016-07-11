#include "loginwindow.h"
#include "ui_loginwindow.h"

LoginWindow::LoginWindow(QWidget *parent) : QWidget(parent), ui(new Ui::LoginWindow)
{
    ui->setupUi( this );

    // Loops through buttons 0-9
    for ( int i = 0; i < ui->passwordButtonLayout->count(); i++ )
    {
        // Retrieve current widget, convert to QPushButton
        QWidget* widget = ui->passwordButtonLayout->itemAt( i )->widget();
        QPushButton* button = qobject_cast<QPushButton*>( widget );

        QString buttonText = button->text();
        // Connects this button to the lineEdit widget

        if ( button )
        {
            if ( buttonText.compare( "ENTER" ) == 0 )
            {
                connect( button, SIGNAL( clicked() ), this, SLOT( enterButtonPressed() ) );
            }
            else if ( buttonText.compare( "BACK" ) == 0 )
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

LoginWindow::~LoginWindow()
{
    delete ui;
}

// Slot to act when a password button is pressed
void LoginWindow::keyboardButtonPressed()
{
    QPushButton* button = qobject_cast<QPushButton*>( sender() );

    // Inserts text from button into lineEdit widget.
    if ( button )
    {
        QString currentText = ui->lineEdit->text();

        if ( currentText.length() > 4 )
        {
            ui->lineEdit->clear();
            ui->lineEdit->setEchoMode( QLineEdit::Password );
            ui->lineEdit->setMaxLength( 4 );
        }

        ui->lineEdit->insert( button->text() );
    }
}

void LoginWindow::enterButtonPressed()
{
    QPushButton* button = qobject_cast<QPushButton*>( sender() );
    QString currentText = ui->lineEdit->text();

    if ( button && currentText.length() == 4 )
    {
        passwordCheck();
    }
}

void LoginWindow::backButtonPressed()
{
    QPushButton* button = qobject_cast<QPushButton*>( sender() );

    if ( button && ui->lineEdit->text().length() <= 4 )
    {
        ui->lineEdit->backspace();
    }
}

void LoginWindow::passwordCheck()
{
    QString currentText = ui->lineEdit->text();

    // Password: "0000" for testing. Check database here.
    if ( currentText.compare( "0000") == 0 )
    {
        ui->lineEdit->setEchoMode( QLineEdit::Normal );
        ui->lineEdit->setMaxLength( 32767 );
        ui->lineEdit->setText("Success");
        emit logIn();
    }
    else
    {
        ui->lineEdit->setEchoMode( QLineEdit::Normal );
        ui->lineEdit->setMaxLength( 32767 );
        ui->lineEdit->setText("Invalid PIN");
    }
}
