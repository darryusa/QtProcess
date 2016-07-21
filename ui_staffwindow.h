/********************************************************************************
** Form generated from reading UI file 'staffwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STAFFWINDOW_H
#define UI_STAFFWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StaffWindow
{
public:
    QTableView *tableView;
    QPushButton *searchIcon;
    QLineEdit *searchLineEdit;
    QLabel *pictureLabel;
    QFrame *frame_2;
    QLabel *label;
    QFrame *frame_3;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QLineEdit *firstNameLineEdit;
    QLineEdit *lastNameLineEdit;
    QLineEdit *addressLineEdit;
    QLineEdit *phoneNumberLineEdit;
    QLineEdit *emailAddressLineEdit;
    QPushButton *modifyPINButton;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout;
    QPushButton *confirmButton_2;
    QPushButton *cancelButton_2;
    QFrame *frame_6;
    QVBoxLayout *verticalLayout_2;
    QLabel *firstNameLabel;
    QLabel *lastNameLabel;
    QLabel *addressLabel;
    QLabel *phoneNumberLabel;
    QLabel *emailAddressLabel;
    QLabel *pINLabel;
    QPushButton *addButton_2;
    QPushButton *removeButton_2;

    void setupUi(QWidget *StaffWindow)
    {
        if (StaffWindow->objectName().isEmpty())
            StaffWindow->setObjectName(QStringLiteral("StaffWindow"));
        StaffWindow->resize(1024, 600);
        StaffWindow->setToolTipDuration(-6);
        StaffWindow->setLayoutDirection(Qt::LeftToRight);
        tableView = new QTableView(StaffWindow);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(650, 130, 351, 441));
        QFont font;
        font.setPointSize(16);
        tableView->setFont(font);
        tableView->setStyleSheet(QLatin1String("QTableView { \n"
"	border-radius: 20px; \n"
"	color:rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255); \n"
"} \n"
"\n"
"QTableView::item:selected {\n"
"   	background-color: red;\n"
"	border-radius: 5px;\n"
"}\n"
"QTableView QTableCornerButton::section {\n"
"    background: red;\n"
"    border: 2px outset red;\n"
"}"));
        tableView->setLineWidth(1);
        tableView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableView->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::EditKeyPressed|QAbstractItemView::SelectedClicked);
        tableView->setAlternatingRowColors(true);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->setGridStyle(Qt::DashLine);
        tableView->setSortingEnabled(true);
        tableView->horizontalHeader()->setVisible(false);
        tableView->horizontalHeader()->setMinimumSectionSize(10);
        tableView->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableView->horizontalHeader()->setStretchLastSection(true);
        tableView->verticalHeader()->setVisible(false);
        tableView->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        searchIcon = new QPushButton(StaffWindow);
        searchIcon->setObjectName(QStringLiteral("searchIcon"));
        searchIcon->setGeometry(QRect(660, 90, 41, 31));
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/noun_79907_cc.png"), QSize(), QIcon::Normal, QIcon::Off);
        searchIcon->setIcon(icon);
        searchIcon->setIconSize(QSize(41, 31));
        searchIcon->setFlat(true);
        searchLineEdit = new QLineEdit(StaffWindow);
        searchLineEdit->setObjectName(QStringLiteral("searchLineEdit"));
        searchLineEdit->setGeometry(QRect(700, 90, 301, 31));
        searchLineEdit->setMinimumSize(QSize(0, 25));
        searchLineEdit->setFont(font);
        searchLineEdit->setStyleSheet(QLatin1String("QLineEdit { \n"
"	border-radius: 8px; \n"
"	color:rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255); \n"
"} \n"
"\n"
""));
        pictureLabel = new QLabel(StaffWindow);
        pictureLabel->setObjectName(QStringLiteral("pictureLabel"));
        pictureLabel->setGeometry(QRect(0, 0, 1024, 600));
        pictureLabel->setAutoFillBackground(true);
        pictureLabel->setFrameShadow(QFrame::Raised);
        pictureLabel->setPixmap(QPixmap(QString::fromUtf8(":/image/background.jpg")));
        pictureLabel->setScaledContents(true);
        frame_2 = new QFrame(StaffWindow);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(20, 10, 991, 61));
        frame_2->setStyleSheet(QStringLiteral("background-color: rgb(90, 130, 31);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 0, 951, 61));
        QFont font1;
        font1.setPointSize(36);
        label->setFont(font1);
        label->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignCenter);
        frame_3 = new QFrame(StaffWindow);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(240, 129, 401, 381));
        frame_3->setStyleSheet(QStringLiteral("background-color: rgb(202, 218, 154);"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        frame = new QFrame(frame_3);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(-1, 0, 401, 321));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        firstNameLineEdit = new QLineEdit(frame);
        firstNameLineEdit->setObjectName(QStringLiteral("firstNameLineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(firstNameLineEdit->sizePolicy().hasHeightForWidth());
        firstNameLineEdit->setSizePolicy(sizePolicy);
        firstNameLineEdit->setMinimumSize(QSize(335, 25));
        firstNameLineEdit->setStyleSheet(QLatin1String("QLineEdit { \n"
"	border-radius: 8px; \n"
"	color:rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255); \n"
"} \n"
"\n"
""));
        firstNameLineEdit->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(firstNameLineEdit);

        lastNameLineEdit = new QLineEdit(frame);
        lastNameLineEdit->setObjectName(QStringLiteral("lastNameLineEdit"));
        sizePolicy.setHeightForWidth(lastNameLineEdit->sizePolicy().hasHeightForWidth());
        lastNameLineEdit->setSizePolicy(sizePolicy);
        lastNameLineEdit->setMinimumSize(QSize(335, 25));
        lastNameLineEdit->setStyleSheet(QLatin1String("QLineEdit { \n"
"	border-radius: 8px; \n"
"	color:rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255); \n"
"} \n"
"\n"
""));
        lastNameLineEdit->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lastNameLineEdit);

        addressLineEdit = new QLineEdit(frame);
        addressLineEdit->setObjectName(QStringLiteral("addressLineEdit"));
        sizePolicy.setHeightForWidth(addressLineEdit->sizePolicy().hasHeightForWidth());
        addressLineEdit->setSizePolicy(sizePolicy);
        addressLineEdit->setMinimumSize(QSize(335, 25));
        addressLineEdit->setStyleSheet(QLatin1String("QLineEdit { \n"
"	border-radius: 8px; \n"
"	color:rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255); \n"
"} \n"
"\n"
""));
        addressLineEdit->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(addressLineEdit);

        phoneNumberLineEdit = new QLineEdit(frame);
        phoneNumberLineEdit->setObjectName(QStringLiteral("phoneNumberLineEdit"));
        sizePolicy.setHeightForWidth(phoneNumberLineEdit->sizePolicy().hasHeightForWidth());
        phoneNumberLineEdit->setSizePolicy(sizePolicy);
        phoneNumberLineEdit->setMinimumSize(QSize(335, 25));
        phoneNumberLineEdit->setStyleSheet(QLatin1String("QLineEdit { \n"
"	border-radius: 8px; \n"
"	color:rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255); \n"
"} \n"
"\n"
""));
        phoneNumberLineEdit->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(phoneNumberLineEdit);

        emailAddressLineEdit = new QLineEdit(frame);
        emailAddressLineEdit->setObjectName(QStringLiteral("emailAddressLineEdit"));
        sizePolicy.setHeightForWidth(emailAddressLineEdit->sizePolicy().hasHeightForWidth());
        emailAddressLineEdit->setSizePolicy(sizePolicy);
        emailAddressLineEdit->setMinimumSize(QSize(335, 25));
        emailAddressLineEdit->setStyleSheet(QLatin1String("QLineEdit { \n"
"	border-radius: 8px; \n"
"	color:rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255); \n"
"} \n"
"\n"
""));
        emailAddressLineEdit->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(emailAddressLineEdit);

        modifyPINButton = new QPushButton(frame);
        modifyPINButton->setObjectName(QStringLiteral("modifyPINButton"));
        modifyPINButton->setMinimumSize(QSize(0, 25));
        QFont font2;
        font2.setPointSize(15);
        modifyPINButton->setFont(font2);
        modifyPINButton->setStyleSheet(QLatin1String("QPushButton { \n"
"	border-radius: 8px; \n"
"	color:rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255); \n"
"} \n"
"\n"
""));

        verticalLayout->addWidget(modifyPINButton);

        frame_4 = new QFrame(frame_3);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(0, 320, 401, 61));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(10);
        sizePolicy1.setHeightForWidth(frame_4->sizePolicy().hasHeightForWidth());
        frame_4->setSizePolicy(sizePolicy1);
        frame_4->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_4);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        confirmButton_2 = new QPushButton(frame_4);
        confirmButton_2->setObjectName(QStringLiteral("confirmButton_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(confirmButton_2->sizePolicy().hasHeightForWidth());
        confirmButton_2->setSizePolicy(sizePolicy2);
        QFont font3;
        font3.setPointSize(22);
        confirmButton_2->setFont(font3);
        confirmButton_2->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.041, x2:0.534178, y2:0.358, stop:0.0366492 rgba(64, 103, 10, 164), stop:1 rgba(164, 179, 60, 255));\n"
"\n"
"	border-radius: 10px;\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
""));

        horizontalLayout->addWidget(confirmButton_2);

        cancelButton_2 = new QPushButton(frame_4);
        cancelButton_2->setObjectName(QStringLiteral("cancelButton_2"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(cancelButton_2->sizePolicy().hasHeightForWidth());
        cancelButton_2->setSizePolicy(sizePolicy3);
        cancelButton_2->setFont(font3);
        cancelButton_2->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.041, x2:0.534178, y2:0.358, stop:0.0366492 rgba(64, 103, 10, 164), stop:1 rgba(164, 179, 60, 255));\n"
"\n"
"	border-radius: 10px;\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
""));

        horizontalLayout->addWidget(cancelButton_2);

        frame_6 = new QFrame(StaffWindow);
        frame_6->setObjectName(QStringLiteral("frame_6"));
        frame_6->setGeometry(QRect(20, 130, 221, 321));
        QFont font4;
        font4.setPointSize(15);
        font4.setBold(true);
        font4.setUnderline(false);
        font4.setWeight(75);
        frame_6->setFont(font4);
        frame_6->setToolTipDuration(-3);
        frame_6->setLayoutDirection(Qt::RightToLeft);
        frame_6->setAutoFillBackground(false);
        frame_6->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        firstNameLabel = new QLabel(frame_6);
        firstNameLabel->setObjectName(QStringLiteral("firstNameLabel"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(firstNameLabel->sizePolicy().hasHeightForWidth());
        firstNameLabel->setSizePolicy(sizePolicy4);
        firstNameLabel->setMinimumSize(QSize(66, 25));
        QFont font5;
        font5.setPointSize(18);
        font5.setBold(true);
        font5.setWeight(75);
        firstNameLabel->setFont(font5);
        firstNameLabel->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(firstNameLabel);

        lastNameLabel = new QLabel(frame_6);
        lastNameLabel->setObjectName(QStringLiteral("lastNameLabel"));
        sizePolicy4.setHeightForWidth(lastNameLabel->sizePolicy().hasHeightForWidth());
        lastNameLabel->setSizePolicy(sizePolicy4);
        lastNameLabel->setMinimumSize(QSize(65, 25));
        lastNameLabel->setFont(font5);
        lastNameLabel->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(lastNameLabel);

        addressLabel = new QLabel(frame_6);
        addressLabel->setObjectName(QStringLiteral("addressLabel"));
        sizePolicy4.setHeightForWidth(addressLabel->sizePolicy().hasHeightForWidth());
        addressLabel->setSizePolicy(sizePolicy4);
        addressLabel->setMinimumSize(QSize(49, 25));
        addressLabel->setFont(font5);
        addressLabel->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(addressLabel);

        phoneNumberLabel = new QLabel(frame_6);
        phoneNumberLabel->setObjectName(QStringLiteral("phoneNumberLabel"));
        sizePolicy4.setHeightForWidth(phoneNumberLabel->sizePolicy().hasHeightForWidth());
        phoneNumberLabel->setSizePolicy(sizePolicy4);
        phoneNumberLabel->setMinimumSize(QSize(90, 25));
        phoneNumberLabel->setFont(font5);
        phoneNumberLabel->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(phoneNumberLabel);

        emailAddressLabel = new QLabel(frame_6);
        emailAddressLabel->setObjectName(QStringLiteral("emailAddressLabel"));
        sizePolicy4.setHeightForWidth(emailAddressLabel->sizePolicy().hasHeightForWidth());
        emailAddressLabel->setSizePolicy(sizePolicy4);
        emailAddressLabel->setMinimumSize(QSize(86, 25));
        emailAddressLabel->setFont(font5);
        emailAddressLabel->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(emailAddressLabel);

        pINLabel = new QLabel(frame_6);
        pINLabel->setObjectName(QStringLiteral("pINLabel"));
        pINLabel->setFont(font5);
        pINLabel->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(pINLabel);

        addButton_2 = new QPushButton(StaffWindow);
        addButton_2->setObjectName(QStringLiteral("addButton_2"));
        addButton_2->setGeometry(QRect(450, 520, 187, 40));
        QFont font6;
        font6.setPointSize(26);
        addButton_2->setFont(font6);
        addButton_2->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.041, x2:0.534178, y2:0.358, stop:0.0366492 rgba(64, 103, 10, 164), stop:1 rgba(164, 179, 60, 255));\n"
"\n"
"	border-radius: 10px;\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
""));
        removeButton_2 = new QPushButton(StaffWindow);
        removeButton_2->setObjectName(QStringLiteral("removeButton_2"));
        removeButton_2->setGeometry(QRect(240, 520, 188, 40));
        removeButton_2->setFont(font6);
        removeButton_2->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.041, x2:0.534178, y2:0.358, stop:0.0366492 rgba(64, 103, 10, 164), stop:1 rgba(164, 179, 60, 255));\n"
"\n"
"	border-radius: 10px;\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
""));
        pictureLabel->raise();
        tableView->raise();
        searchIcon->raise();
        searchLineEdit->raise();
        frame_2->raise();
        frame_3->raise();
        frame_6->raise();
        addButton_2->raise();
        removeButton_2->raise();

        retranslateUi(StaffWindow);

        QMetaObject::connectSlotsByName(StaffWindow);
    } // setupUi

    void retranslateUi(QWidget *StaffWindow)
    {
        StaffWindow->setWindowTitle(QApplication::translate("StaffWindow", "Form", 0));
        searchIcon->setText(QString());
        searchLineEdit->setText(QApplication::translate("StaffWindow", "  Search...", 0));
        pictureLabel->setText(QString());
        label->setText(QApplication::translate("StaffWindow", "Transaction Report", 0));
        modifyPINButton->setText(QApplication::translate("StaffWindow", "*    *    *    *", 0));
        confirmButton_2->setText(QApplication::translate("StaffWindow", "Confirm", 0));
        cancelButton_2->setText(QApplication::translate("StaffWindow", "Cancel", 0));
#ifndef QT_NO_TOOLTIP
        frame_6->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        firstNameLabel->setText(QApplication::translate("StaffWindow", "First Name", 0));
        lastNameLabel->setText(QApplication::translate("StaffWindow", "Last Name", 0));
        addressLabel->setText(QApplication::translate("StaffWindow", "Address", 0));
        phoneNumberLabel->setText(QApplication::translate("StaffWindow", "Phone Number", 0));
        emailAddressLabel->setText(QApplication::translate("StaffWindow", "Email Address", 0));
        pINLabel->setText(QApplication::translate("StaffWindow", "PIN", 0));
        addButton_2->setText(QApplication::translate("StaffWindow", "Add", 0));
        removeButton_2->setText(QApplication::translate("StaffWindow", "Remove", 0));
    } // retranslateUi

};

namespace Ui {
    class StaffWindow: public Ui_StaffWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAFFWINDOW_H
