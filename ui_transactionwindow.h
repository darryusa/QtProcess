/********************************************************************************
** Form generated from reading UI file 'transactionwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSACTIONWINDOW_H
#define UI_TRANSACTIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TransactionWindow
{
public:
    QTableView *tableView;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *pictureLabel;
    QFrame *frame_2;
    QLabel *label_4;
    QFrame *frame_3;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QLineEdit *priceLineEdit;
    QLineEdit *quanitityLineEdit;
    QTableView *tableView_2;
    QLabel *label;

    void setupUi(QWidget *TransactionWindow)
    {
        if (TransactionWindow->objectName().isEmpty())
            TransactionWindow->setObjectName(QStringLiteral("TransactionWindow"));
        TransactionWindow->resize(1024, 600);
        tableView = new QTableView(TransactionWindow);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(590, 80, 421, 421));
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
        pushButton = new QPushButton(TransactionWindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(610, 520, 181, 51));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.041, x2:0.534178, y2:0.358, stop:0.0366492 rgba(64, 103, 10, 164), stop:1 rgba(164, 179, 60, 255));\n"
"\n"
"	border-radius: 10px;\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        pushButton_2 = new QPushButton(TransactionWindow);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(810, 520, 181, 51));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.041, x2:0.534178, y2:0.358, stop:0.0366492 rgba(64, 103, 10, 164), stop:1 rgba(164, 179, 60, 255));\n"
"\n"
"	border-radius: 10px;\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        pictureLabel = new QLabel(TransactionWindow);
        pictureLabel->setObjectName(QStringLiteral("pictureLabel"));
        pictureLabel->setGeometry(QRect(0, -10, 1024, 611));
        pictureLabel->setAutoFillBackground(true);
        pictureLabel->setFrameShadow(QFrame::Raised);
        pictureLabel->setPixmap(QPixmap(QString::fromUtf8(":/image/background.jpg")));
        pictureLabel->setScaledContents(true);
        frame_2 = new QFrame(TransactionWindow);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(10, 10, 1000, 61));
        frame_2->setStyleSheet(QStringLiteral("background-color: rgb(90, 130, 31);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 0, 931, 61));
        QFont font1;
        font1.setPointSize(36);
        label_4->setFont(font1);
        label_4->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_4->setAlignment(Qt::AlignCenter);
        frame_3 = new QFrame(TransactionWindow);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(80, 80, 481, 501));
        frame_3->setStyleSheet(QStringLiteral("background-color: rgb(202, 218, 154);"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        frame = new QFrame(frame_3);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 390, 481, 111));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMinimumSize(QSize(335, 25));
        lineEdit->setStyleSheet(QLatin1String("QLineEdit { \n"
"	border-radius: 8px; \n"
"	color:rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255); \n"
"} \n"
""));

        verticalLayout->addWidget(lineEdit);

        priceLineEdit = new QLineEdit(frame);
        priceLineEdit->setObjectName(QStringLiteral("priceLineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(priceLineEdit->sizePolicy().hasHeightForWidth());
        priceLineEdit->setSizePolicy(sizePolicy);
        priceLineEdit->setMinimumSize(QSize(335, 25));
        priceLineEdit->setStyleSheet(QLatin1String("QLineEdit { \n"
"	border-radius: 8px; \n"
"	color:rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255); \n"
"} \n"
"\n"
""));
        priceLineEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout->addWidget(priceLineEdit);

        quanitityLineEdit = new QLineEdit(frame);
        quanitityLineEdit->setObjectName(QStringLiteral("quanitityLineEdit"));
        sizePolicy.setHeightForWidth(quanitityLineEdit->sizePolicy().hasHeightForWidth());
        quanitityLineEdit->setSizePolicy(sizePolicy);
        quanitityLineEdit->setMinimumSize(QSize(335, 25));
        quanitityLineEdit->setStyleSheet(QLatin1String("QLineEdit { \n"
"	border-radius: 8px; \n"
"	color:rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255); \n"
"} \n"
"\n"
""));
        quanitityLineEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout->addWidget(quanitityLineEdit);

        tableView_2 = new QTableView(frame_3);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(10, 40, 461, 341));
        tableView_2->setStyleSheet(QLatin1String("QTableView { \n"
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
        label = new QLabel(frame_3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 481, 41));
        QFont font2;
        font2.setPointSize(26);
        font2.setBold(false);
        font2.setWeight(50);
        label->setFont(font2);
        label->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        label->setAlignment(Qt::AlignCenter);
        pictureLabel->raise();
        tableView->raise();
        pushButton->raise();
        pushButton_2->raise();
        frame_2->raise();
        frame_3->raise();

        retranslateUi(TransactionWindow);

        QMetaObject::connectSlotsByName(TransactionWindow);
    } // setupUi

    void retranslateUi(QWidget *TransactionWindow)
    {
        TransactionWindow->setWindowTitle(QApplication::translate("TransactionWindow", "Form", 0));
        pushButton->setText(QApplication::translate("TransactionWindow", "DELETE", 0));
        pushButton_2->setText(QApplication::translate("TransactionWindow", "CHECK OUT", 0));
        pictureLabel->setText(QString());
        label_4->setText(QApplication::translate("TransactionWindow", "Sale Transaction", 0));
        lineEdit->setText(QApplication::translate("TransactionWindow", "SubTotal: ", 0));
        priceLineEdit->setText(QApplication::translate("TransactionWindow", "Sales Tax: ", 0));
        quanitityLineEdit->setText(QApplication::translate("TransactionWindow", "Total: ", 0));
        label->setText(QApplication::translate("TransactionWindow", "Bill of Sale", 0));
    } // retranslateUi

};

namespace Ui {
    class TransactionWindow: public Ui_TransactionWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSACTIONWINDOW_H
