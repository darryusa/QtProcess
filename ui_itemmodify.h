/********************************************************************************
** Form generated from reading UI file 'itemmodify.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEMMODIFY_H
#define UI_ITEMMODIFY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ItemModify
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *ID;
    QLabel *nameLabel;
    QLineEdit *nameLineEdit;
    QLabel *priceLabel;
    QLineEdit *priceLineEdit;
    QLabel *categoryLabel;
    QComboBox *categoryComboBox;
    QLabel *descriptionLabel;
    QLineEdit *descriptionLineEdit;
    QLabel *quantityLabel;
    QSpinBox *quantitySpinBox;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *ItemModify)
    {
        if (ItemModify->objectName().isEmpty())
            ItemModify->setObjectName(QStringLiteral("ItemModify"));
        ItemModify->resize(700, 600);
        formLayoutWidget = new QWidget(ItemModify);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(120, 80, 431, 241));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignCenter);
        formLayout->setFormAlignment(Qt::AlignHCenter|Qt::AlignTop);
        formLayout->setContentsMargins(0, 30, 0, 0);
        ID = new QLabel(formLayoutWidget);
        ID->setObjectName(QStringLiteral("ID"));
        ID->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(0, QFormLayout::FieldRole, ID);

        nameLabel = new QLabel(formLayoutWidget);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setMinimumSize(QSize(0, 25));

        formLayout->setWidget(1, QFormLayout::LabelRole, nameLabel);

        nameLineEdit = new QLineEdit(formLayoutWidget);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));
        nameLineEdit->setMinimumSize(QSize(0, 25));

        formLayout->setWidget(1, QFormLayout::FieldRole, nameLineEdit);

        priceLabel = new QLabel(formLayoutWidget);
        priceLabel->setObjectName(QStringLiteral("priceLabel"));
        priceLabel->setMinimumSize(QSize(0, 25));

        formLayout->setWidget(3, QFormLayout::LabelRole, priceLabel);

        priceLineEdit = new QLineEdit(formLayoutWidget);
        priceLineEdit->setObjectName(QStringLiteral("priceLineEdit"));
        priceLineEdit->setMinimumSize(QSize(0, 25));

        formLayout->setWidget(3, QFormLayout::FieldRole, priceLineEdit);

        categoryLabel = new QLabel(formLayoutWidget);
        categoryLabel->setObjectName(QStringLiteral("categoryLabel"));
        categoryLabel->setMinimumSize(QSize(0, 25));

        formLayout->setWidget(4, QFormLayout::LabelRole, categoryLabel);

        categoryComboBox = new QComboBox(formLayoutWidget);
        categoryComboBox->setObjectName(QStringLiteral("categoryComboBox"));
        categoryComboBox->setMinimumSize(QSize(0, 25));
        categoryComboBox->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        formLayout->setWidget(4, QFormLayout::FieldRole, categoryComboBox);

        descriptionLabel = new QLabel(formLayoutWidget);
        descriptionLabel->setObjectName(QStringLiteral("descriptionLabel"));

        formLayout->setWidget(6, QFormLayout::LabelRole, descriptionLabel);

        descriptionLineEdit = new QLineEdit(formLayoutWidget);
        descriptionLineEdit->setObjectName(QStringLiteral("descriptionLineEdit"));
        descriptionLineEdit->setMinimumSize(QSize(0, 50));

        formLayout->setWidget(6, QFormLayout::FieldRole, descriptionLineEdit);

        quantityLabel = new QLabel(formLayoutWidget);
        quantityLabel->setObjectName(QStringLiteral("quantityLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, quantityLabel);

        quantitySpinBox = new QSpinBox(formLayoutWidget);
        quantitySpinBox->setObjectName(QStringLiteral("quantitySpinBox"));
        quantitySpinBox->setMaximum(1000);

        formLayout->setWidget(2, QFormLayout::FieldRole, quantitySpinBox);

        label = new QLabel(ItemModify);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 10, 591, 51));
        QFont font;
        font.setPointSize(50);
        label->setFont(font);
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(ItemModify);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 390, 131, 41));
        pushButton_2 = new QPushButton(ItemModify);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(410, 390, 111, 41));

        retranslateUi(ItemModify);

        categoryComboBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ItemModify);
    } // setupUi

    void retranslateUi(QDialog *ItemModify)
    {
        ItemModify->setWindowTitle(QApplication::translate("ItemModify", "Dialog", 0));
        ID->setText(QApplication::translate("ItemModify", "ID = ", 0));
        nameLabel->setText(QApplication::translate("ItemModify", "Name", 0));
        priceLabel->setText(QApplication::translate("ItemModify", "Price", 0));
        categoryLabel->setText(QApplication::translate("ItemModify", "Category", 0));
        categoryComboBox->clear();
        categoryComboBox->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("ItemModify", "Items", 0)
         << QApplication::translate("ItemModify", "Massage", 0)
         << QApplication::translate("ItemModify", "Hair", 0)
         << QApplication::translate("ItemModify", "Nail", 0)
        );
        categoryComboBox->setCurrentText(QString());
        descriptionLabel->setText(QApplication::translate("ItemModify", "Description", 0));
        quantityLabel->setText(QApplication::translate("ItemModify", "Quantity", 0));
        label->setText(QApplication::translate("ItemModify", "New/Edit Items", 0));
        pushButton->setText(QApplication::translate("ItemModify", "Confirm", 0));
        pushButton_2->setText(QApplication::translate("ItemModify", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ItemModify: public Ui_ItemModify {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEMMODIFY_H
