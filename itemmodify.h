#ifndef ITEMMODIFY_H
#define ITEMMODIFY_H

#include <QDialog>

namespace Ui {
class ItemModify;
}

class ItemModify : public QDialog
{
    Q_OBJECT
signals:
    void returnToInventory();
public:
    explicit ItemModify(QWidget *parent = 0);
    ~ItemModify();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::ItemModify *ui;
    int static sender;
    void autoFill();
};

#endif // ITEMMODIFY_H
