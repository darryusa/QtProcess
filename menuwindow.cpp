#include "menuwindow.h"
#include <logindialog.h>
#include <ui_menuwindow.h>
MenuWindow::MenuWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MenuWindow)
{
    ui->setupUi(this);
}

MenuWindow::~MenuWindow()
{
    delete ui;
}



void MenuWindow::on_reportButton_clicked()
{


}
