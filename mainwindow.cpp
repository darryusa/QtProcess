#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_saleButton_clicked()
{
    emit saleClicked();
}

void MainWindow::on_inventoryButton_clicked()
{
    emit inventoryClicked();
}

void MainWindow::on_staffButton_clicked()
{
    emit staffClicked();
}

void MainWindow::on_reportButton_clicked()
{
    emit reportClicked();

}
