#ifndef INVENTORYWINDOW_H
#define INVENTORYWINDOW_H

#include <QWidget>

namespace Ui {
class InventoryWindow;
}

class InventoryWindow : public QWidget
{
    Q_OBJECT

public:
    explicit InventoryWindow(QWidget *parent = 0);
    ~InventoryWindow();

private:
    Ui::InventoryWindow *ui;
};

#endif // INVENTORYWINDOW_H
