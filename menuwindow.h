#ifndef MENUWINDOW_H
#define MENUWINDOW_H

#include <QWidget>

namespace Ui {
class MenuWindow;
}

class MenuWindow : public QWidget
{
    Q_OBJECT

public:
    explicit MenuWindow(QWidget *parent = 0);
    ~MenuWindow();

//private slots:
//    void on_reportButton_clicked();
//    void reportsButtonPressed();
private:
    Ui::MenuWindow *ui;

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
};

#endif // MENUWINDOW_H
