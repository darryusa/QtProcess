#include "menuwindow.h"
#include <logindialog.h>
#include <ui_menuwindow.h>
#include <QDebug>
MenuWindow::MenuWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MenuWindow)
{
    ui->setupUi(this);
   // int length = ui->menuButtonGroup->;
//    for ( int i = 0; i < length; i++ )
//    {
//        // Retrieve current widget, convert to QPushButton
//        QWidget* widget = ui->menuButtonGroup->itemAt( i )->widget();
//        QPushButton* button = qobject_cast<QPushButton*>( widget );

//        QString buttonText = button->text();
//        // Connects this button to the lineEdit widget

//        if ( button )
//        {
//            switch (buttonText)
//            {
//            case "Reports":
//                connect( button, SIGNAL( clicked() ), this, SLOT( on_reportButton_clicked() ) );
//                break;
//            case "Sales":
//                connect( button, SIGNAL( clicked() ), this, SLOT( on_saleButton_clicked() ) );
//                break;
//            case "Inventory":
//                connect( button, SIGNAL( clicked() ), this, SLOT( on_inventoryButton_clicked() ) );
//                break;
//            case "Staff":
//                connect( button, SIGNAL( clicked() ), this, SLOT( on_staffButton_clicked() ) );
//                break;
//            }

//        }
//    }
}

MenuWindow::~MenuWindow()
{
    delete ui;
}




void MenuWindow::on_saleButton_clicked()
{
   // emit saleLogin();
}

void MenuWindow::on_inventoryButton_clicked()
{
    //emit inventoryLogin();
}

void MenuWindow::on_staffButton_clicked()
{
    emit staffClicked();
}

void MenuWindow::on_reportButton_clicked()
{
//    emit reportLogin();
}
