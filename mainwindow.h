#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT


signals:
    void reportClicked();
    void staffClicked();
    void saleClicked();
    void inventoryClicked();

private slots:
    void on_saleButton_clicked();
    void on_inventoryButton_clicked();
    void on_staffButton_clicked();
    void on_reportButton_clicked();
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
