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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ItemModify
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *nameLabel;
    QLineEdit *nameLineEdit;
    QLabel *priceLabel;
    QLineEdit *priceLineEdit;
    QLabel *categoryLabel;
    QComboBox *categoryComboBox;
    QLabel *descriptionLabel;
    QLabel *quantityLabel;
    QSpinBox *quantitySpinBox;
    QLineEdit *descriptionLineEdit;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_5;
    QLabel *ID;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *ItemModify)
    {
        if (ItemModify->objectName().isEmpty())
            ItemModify->setObjectName(QStringLiteral("ItemModify"));
        ItemModify->resize(700, 600);
        ItemModify->setWindowOpacity(1);
        ItemModify->setAutoFillBackground(false);
        ItemModify->setStyleSheet(QStringLiteral("background-color: rgb(210, 224, 147);"));
        ItemModify->setModal(false);
        formLayoutWidget = new QWidget(ItemModify);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(80, 30, 531, 451));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignCenter);
        formLayout->setFormAlignment(Qt::AlignHCenter|Qt::AlignTop);
        formLayout->setContentsMargins(0, 30, 0, 0);
        nameLabel = new QLabel(formLayoutWidget);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setMinimumSize(QSize(0, 25));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        nameLabel->setFont(font);

        formLayout->setWidget(3, QFormLayout::LabelRole, nameLabel);

        nameLineEdit = new QLineEdit(formLayoutWidget);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));
        nameLineEdit->setMinimumSize(QSize(0, 25));
        nameLineEdit->setStyleSheet(QLatin1String("QLineEdit { \n"
"	border-radius: 12px; \n"
"	color:rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255); \n"
"} \n"
""));

        formLayout->setWidget(3, QFormLayout::FieldRole, nameLineEdit);

        priceLabel = new QLabel(formLayoutWidget);
        priceLabel->setObjectName(QStringLiteral("priceLabel"));
        priceLabel->setMinimumSize(QSize(0, 25));
        priceLabel->setFont(font);

        formLayout->setWidget(7, QFormLayout::LabelRole, priceLabel);

        priceLineEdit = new QLineEdit(formLayoutWidget);
        priceLineEdit->setObjectName(QStringLiteral("priceLineEdit"));
        priceLineEdit->setMinimumSize(QSize(0, 25));
        priceLineEdit->setStyleSheet(QLatin1String("QLineEdit { \n"
"	border-radius: 12px; \n"
"	color:rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255); \n"
"} \n"
""));

        formLayout->setWidget(7, QFormLayout::FieldRole, priceLineEdit);

        categoryLabel = new QLabel(formLayoutWidget);
        categoryLabel->setObjectName(QStringLiteral("categoryLabel"));
        categoryLabel->setMinimumSize(QSize(0, 25));
        categoryLabel->setFont(font);

        formLayout->setWidget(9, QFormLayout::LabelRole, categoryLabel);

        categoryComboBox = new QComboBox(formLayoutWidget);
        categoryComboBox->setObjectName(QStringLiteral("categoryComboBox"));
        categoryComboBox->setMinimumSize(QSize(0, 25));
        categoryComboBox->setStyleSheet(QLatin1String("\n"
"	border-radius: 12px; \n"
"	color:rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255); \n"
"\n"
""));
        categoryComboBox->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        formLayout->setWidget(9, QFormLayout::FieldRole, categoryComboBox);

        descriptionLabel = new QLabel(formLayoutWidget);
        descriptionLabel->setObjectName(QStringLiteral("descriptionLabel"));
        descriptionLabel->setFont(font);

        formLayout->setWidget(11, QFormLayout::LabelRole, descriptionLabel);

        quantityLabel = new QLabel(formLayoutWidget);
        quantityLabel->setObjectName(QStringLiteral("quantityLabel"));
        quantityLabel->setFont(font);

        formLayout->setWidget(5, QFormLayout::LabelRole, quantityLabel);

        quantitySpinBox = new QSpinBox(formLayoutWidget);
        quantitySpinBox->setObjectName(QStringLiteral("quantitySpinBox"));
        quantitySpinBox->setMinimumSize(QSize(0, 25));
        quantitySpinBox->setStyleSheet(QLatin1String("\n"
"	border-radius: 12px; \n"
"	color:rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255); \n"
"\n"
""));
        quantitySpinBox->setMaximum(1000);

        formLayout->setWidget(5, QFormLayout::FieldRole, quantitySpinBox);

        descriptionLineEdit = new QLineEdit(formLayoutWidget);
        descriptionLineEdit->setObjectName(QStringLiteral("descriptionLineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(descriptionLineEdit->sizePolicy().hasHeightForWidth());
        descriptionLineEdit->setSizePolicy(sizePolicy);
        descriptionLineEdit->setMinimumSize(QSize(0, 100));
        descriptionLineEdit->setStyleSheet(QLatin1String("QLineEdit { \n"
"	border-radius: 12px; \n"
"	color:rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255); \n"
"} \n"
""));

        formLayout->setWidget(11, QFormLayout::FieldRole, descriptionLineEdit);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(4, QFormLayout::FieldRole, verticalSpacer);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(2, QFormLayout::FieldRole, verticalSpacer_2);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(6, QFormLayout::FieldRole, verticalSpacer_3);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(8, QFormLayout::FieldRole, verticalSpacer_4);

        verticalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(10, QFormLayout::FieldRole, verticalSpacer_5);

        ID = new QLabel(formLayoutWidget);
        ID->setObjectName(QStringLiteral("ID"));
        ID->setMinimumSize(QSize(0, 25));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        ID->setFont(font1);
        ID->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(1, QFormLayout::FieldRole, ID);

        label = new QLabel(ItemModify);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 10, 591, 51));
        QFont font2;
        font2.setFamily(QStringLiteral("Symbola"));
        font2.setPointSize(36);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        label->setStyleSheet(QStringLiteral("color: rgb(0, 0, 127);"));
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(ItemModify);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(80, 490, 201, 71));
        QFont font3;
        font3.setPointSize(28);
        font3.setBold(true);
        font3.setWeight(75);
        pushButton->setFont(font3);
        pushButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.041, x2:0.534178, y2:0.358, stop:0.0366492 rgba(64, 103, 10, 164), stop:1 rgba(164, 179, 60, 255));\n"
"\n"
"	border-radius: 10px;\n"
"	color: rgb(0, 0, 127);\n"
"}"));
        pushButton_2 = new QPushButton(ItemModify);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(410, 490, 201, 71));
        pushButton_2->setFont(font3);
        pushButton_2->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.041, x2:0.534178, y2:0.358, stop:0.0366492 rgba(64, 103, 10, 164), stop:1 rgba(164, 179, 60, 255));\n"
"\n"
"	border-radius: 10px;\n"
"	\n"
"	color: rgb(0, 0, 127);\n"
"}"));

        retranslateUi(ItemModify);

        categoryComboBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ItemModify);
    } // setupUi

    void retranslateUi(QDialog *ItemModify)
    {
        ItemModify->setWindowTitle(QApplication::translate("ItemModify", "Dialog", 0));
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
        ID->setText(QApplication::translate("ItemModify", "ID = ", 0));
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
