/********************************************************************************
** Form generated from reading UI file 'add_qty_part.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_QTY_PART_H
#define UI_ADD_QTY_PART_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_add_qty_part
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *invoice_num;
    QLineEdit *lineEdit_invoiceNum;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_5;
    QLabel *qtyAdd;
    QLineEdit *lineEdit_QTY_add;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *manufacturer;
    QLineEdit *lineEdit_manufacturer;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout;
    QLabel *remark;
    QLineEdit *lineEdit_Comments;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *partNum;
    QLineEdit *lineEdit_partNo;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label;
    QLineEdit *lineEdit_projj;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton_add_new_proj;
    QPushButton *pushButton_ref;
    QPushButton *pushButton_addPart;
    QPushButton *pushButton_6;
    QPushButton *pushButton_calender;
    QLabel *date;
    QLineEdit *lineEdit_date;

    void setupUi(QDialog *add_qty_part)
    {
        if (add_qty_part->objectName().isEmpty())
            add_qty_part->setObjectName(QStringLiteral("add_qty_part"));
        add_qty_part->resize(671, 546);
        layoutWidget = new QWidget(add_qty_part);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 260, 491, 49));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        invoice_num = new QLabel(layoutWidget);
        invoice_num->setObjectName(QStringLiteral("invoice_num"));
        QFont font;
        font.setPointSize(16);
        invoice_num->setFont(font);

        horizontalLayout_2->addWidget(invoice_num);

        lineEdit_invoiceNum = new QLineEdit(layoutWidget);
        lineEdit_invoiceNum->setObjectName(QStringLiteral("lineEdit_invoiceNum"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_invoiceNum->sizePolicy().hasHeightForWidth());
        lineEdit_invoiceNum->setSizePolicy(sizePolicy);
        lineEdit_invoiceNum->setFont(font);
        lineEdit_invoiceNum->setStyleSheet(QLatin1String("QLineEdit {\n"
"    border: 1px solid #a9a9a9;\n"
"    padding: 5px;\n"
"    border-radius: 10px; /* Adjust the value to control the roundness */\n"
"    background-color: #ffffff; /* Set the background color to white */\n"
"    color: #333333;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #3e7bb6;\n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"    background-color: #e6f3ff; /* Set the hover background color to light blue */\n"
"    animation: blink 0.5s alternate infinite; /* Add a blinking animation */\n"
"}\n"
"\n"
"@keyframes blink {\n"
"    from {\n"
"        background-color: #e6f3ff;\n"
"    }\n"
"    to {\n"
"        background-color: #ffffff;\n"
"    }\n"
"}\n"
""));

        horizontalLayout_2->addWidget(lineEdit_invoiceNum);

        layoutWidget1 = new QWidget(add_qty_part);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(140, 80, 431, 49));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        qtyAdd = new QLabel(layoutWidget1);
        qtyAdd->setObjectName(QStringLiteral("qtyAdd"));
        qtyAdd->setFont(font);

        horizontalLayout_5->addWidget(qtyAdd);

        lineEdit_QTY_add = new QLineEdit(layoutWidget1);
        lineEdit_QTY_add->setObjectName(QStringLiteral("lineEdit_QTY_add"));
        lineEdit_QTY_add->setFont(font);
        lineEdit_QTY_add->setStyleSheet(QLatin1String("QLineEdit {\n"
"    border: 1px solid #a9a9a9;\n"
"    padding: 5px;\n"
"    border-radius: 10px; /* Adjust the value to control the roundness */\n"
"    background-color: #ffffff; /* Set the background color to white */\n"
"    color: #333333;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #3e7bb6;\n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"    background-color: #e6f3ff; /* Set the hover background color to light blue */\n"
"    animation: blink 0.5s alternate infinite; /* Add a blinking animation */\n"
"}\n"
"\n"
"@keyframes blink {\n"
"    from {\n"
"        background-color: #e6f3ff;\n"
"    }\n"
"    to {\n"
"        background-color: #ffffff;\n"
"    }\n"
"}\n"
""));

        horizontalLayout_5->addWidget(lineEdit_QTY_add);

        layoutWidget2 = new QWidget(add_qty_part);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(90, 200, 481, 49));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        manufacturer = new QLabel(layoutWidget2);
        manufacturer->setObjectName(QStringLiteral("manufacturer"));
        manufacturer->setFont(font);

        horizontalLayout_3->addWidget(manufacturer);

        lineEdit_manufacturer = new QLineEdit(layoutWidget2);
        lineEdit_manufacturer->setObjectName(QStringLiteral("lineEdit_manufacturer"));
        lineEdit_manufacturer->setFont(font);
        lineEdit_manufacturer->setStyleSheet(QLatin1String("QLineEdit {\n"
"    border: 1px solid #a9a9a9;\n"
"    padding: 5px;\n"
"    border-radius: 10px; /* Adjust the value to control the roundness */\n"
"    background-color: #ffffff; /* Set the background color to white */\n"
"    color: #333333;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #3e7bb6;\n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"    background-color: #e6f3ff; /* Set the hover background color to light blue */\n"
"    animation: blink 0.5s alternate infinite; /* Add a blinking animation */\n"
"}\n"
"\n"
"@keyframes blink {\n"
"    from {\n"
"        background-color: #e6f3ff;\n"
"    }\n"
"    to {\n"
"        background-color: #ffffff;\n"
"    }\n"
"}\n"
""));

        horizontalLayout_3->addWidget(lineEdit_manufacturer);

        layoutWidget3 = new QWidget(add_qty_part);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(200, 380, 371, 49));
        horizontalLayout = new QHBoxLayout(layoutWidget3);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        remark = new QLabel(layoutWidget3);
        remark->setObjectName(QStringLiteral("remark"));
        remark->setFont(font);

        horizontalLayout->addWidget(remark);

        lineEdit_Comments = new QLineEdit(layoutWidget3);
        lineEdit_Comments->setObjectName(QStringLiteral("lineEdit_Comments"));
        sizePolicy.setHeightForWidth(lineEdit_Comments->sizePolicy().hasHeightForWidth());
        lineEdit_Comments->setSizePolicy(sizePolicy);
        lineEdit_Comments->setFont(font);
        lineEdit_Comments->setStyleSheet(QLatin1String("QLineEdit {\n"
"    border: 1px solid #a9a9a9;\n"
"    padding: 5px;\n"
"    border-radius: 10px; /* Adjust the value to control the roundness */\n"
"    background-color: #ffffff; /* Set the background color to white */\n"
"    color: #333333;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #3e7bb6;\n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"    background-color: #e6f3ff; /* Set the hover background color to light blue */\n"
"    animation: blink 0.5s alternate infinite; /* Add a blinking animation */\n"
"}\n"
"\n"
"@keyframes blink {\n"
"    from {\n"
"        background-color: #e6f3ff;\n"
"    }\n"
"    to {\n"
"        background-color: #ffffff;\n"
"    }\n"
"}\n"
""));

        horizontalLayout->addWidget(lineEdit_Comments);

        layoutWidget4 = new QWidget(add_qty_part);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(180, 20, 391, 49));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        partNum = new QLabel(layoutWidget4);
        partNum->setObjectName(QStringLiteral("partNum"));
        partNum->setFont(font);

        horizontalLayout_6->addWidget(partNum);

        lineEdit_partNo = new QLineEdit(layoutWidget4);
        lineEdit_partNo->setObjectName(QStringLiteral("lineEdit_partNo"));
        lineEdit_partNo->setFont(font);
        lineEdit_partNo->setStyleSheet(QLatin1String("QLineEdit {\n"
"    border: 1px solid #a9a9a9;\n"
"    padding: 5px;\n"
"    border-radius: 10px; /* Adjust the value to control the roundness */\n"
"    background-color: #ffffff; /* Set the background color to white */\n"
"    color: #333333;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #3e7bb6;\n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"    background-color: #e6f3ff; /* Set the hover background color to light blue */\n"
"    animation: blink 0.5s alternate infinite; /* Add a blinking animation */\n"
"}\n"
"\n"
"@keyframes blink {\n"
"    from {\n"
"        background-color: #e6f3ff;\n"
"    }\n"
"    to {\n"
"        background-color: #ffffff;\n"
"    }\n"
"}\n"
""));

        horizontalLayout_6->addWidget(lineEdit_partNo);

        layoutWidget5 = new QWidget(add_qty_part);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(190, 320, 381, 49));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget5);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        horizontalLayout_8->addWidget(label);

        lineEdit_projj = new QLineEdit(layoutWidget5);
        lineEdit_projj->setObjectName(QStringLiteral("lineEdit_projj"));
        lineEdit_projj->setFont(font);
        lineEdit_projj->setStyleSheet(QLatin1String("QLineEdit {\n"
"    border: 1px solid #a9a9a9;\n"
"    padding: 5px;\n"
"    border-radius: 10px; /* Adjust the value to control the roundness */\n"
"    background-color: #ffffff; /* Set the background color to white */\n"
"    color: #333333;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #3e7bb6;\n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"    background-color: #e6f3ff; /* Set the hover background color to light blue */\n"
"    animation: blink 0.5s alternate infinite; /* Add a blinking animation */\n"
"}\n"
"\n"
"@keyframes blink {\n"
"    from {\n"
"        background-color: #e6f3ff;\n"
"    }\n"
"    to {\n"
"        background-color: #ffffff;\n"
"    }\n"
"}\n"
""));

        horizontalLayout_8->addWidget(lineEdit_projj);

        layoutWidget6 = new QWidget(add_qty_part);
        layoutWidget6->setObjectName(QStringLiteral("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(110, 470, 431, 51));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        pushButton_add_new_proj = new QPushButton(layoutWidget6);
        pushButton_add_new_proj->setObjectName(QStringLiteral("pushButton_add_new_proj"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_add_new_proj->sizePolicy().hasHeightForWidth());
        pushButton_add_new_proj->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamily(QStringLiteral("Times New Roman"));
        font1.setPointSize(18);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        pushButton_add_new_proj->setFont(font1);
        pushButton_add_new_proj->setStyleSheet(QLatin1String("\n"
"QPushButton{\n"
"\n"
"	\n"
"\n"
"	font: 18pt \"Times New Roman\";  \n"
"\n"
"		border-right: 1px solid #aaaaaa;\n"
"\n"
"		border-bottom: 1px solid #aaaaaa;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QPushButton:enabled {\n"
"\n"
"		background-color: green;\n"
"\n"
"		color: white;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QPushButton:pressed {\n"
"\n"
"		background-color: green;\n"
"\n"
"		color: white;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QPushButton:hover:!pressed {\n"
"\n"
"		background-color: ORANGE;\n"
"\n"
"		color: red;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QPushButton:disabled {\n"
"\n"
"		background-color: #aaaaaa;\n"
"\n"
"		color: #ffffff;\n"
"\n"
"}"));

        horizontalLayout_7->addWidget(pushButton_add_new_proj);

        pushButton_ref = new QPushButton(layoutWidget6);
        pushButton_ref->setObjectName(QStringLiteral("pushButton_ref"));
        pushButton_ref->setStyleSheet(QStringLiteral(""));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Images/refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_ref->setIcon(icon);
        pushButton_ref->setIconSize(QSize(40, 40));

        horizontalLayout_7->addWidget(pushButton_ref);

        pushButton_addPart = new QPushButton(layoutWidget6);
        pushButton_addPart->setObjectName(QStringLiteral("pushButton_addPart"));
        pushButton_addPart->setStyleSheet(QStringLiteral(""));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Images/submit.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_addPart->setIcon(icon1);
        pushButton_addPart->setIconSize(QSize(40, 40));

        horizontalLayout_7->addWidget(pushButton_addPart);

        pushButton_6 = new QPushButton(layoutWidget6);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setStyleSheet(QStringLiteral(""));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Images/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon2);
        pushButton_6->setIconSize(QSize(40, 40));

        horizontalLayout_7->addWidget(pushButton_6);

        pushButton_calender = new QPushButton(add_qty_part);
        pushButton_calender->setObjectName(QStringLiteral("pushButton_calender"));
        pushButton_calender->setGeometry(QRect(530, 140, 48, 51));
        pushButton_calender->setStyleSheet(QLatin1String("\n"
"QPushButton{\n"
"\n"
"	\n"
"\n"
"	font: 18pt \"Times New Roman\";  \n"
"\n"
"		border-right: 1px solid #aaaaaa;\n"
"\n"
"		border-bottom: 1px solid #aaaaaa;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QPushButton:enabled {\n"
"\n"
"		background-color: green;\n"
"\n"
"		color: white;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QPushButton:pressed {\n"
"\n"
"		background-color: green;\n"
"\n"
"		color: white;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QPushButton:hover:!pressed {\n"
"\n"
"		background-color: ORANGE;\n"
"\n"
"		color: red;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QPushButton:disabled {\n"
"\n"
"		background-color: #aaaaaa;\n"
"\n"
"		color: #ffffff;\n"
"\n"
"}"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Images/date.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_calender->setIcon(icon3);
        pushButton_calender->setIconSize(QSize(35, 35));
        date = new QLabel(add_qty_part);
        date->setObjectName(QStringLiteral("date"));
        date->setGeometry(QRect(160, 150, 151, 33));
        date->setFont(font);
        lineEdit_date = new QLineEdit(add_qty_part);
        lineEdit_date->setObjectName(QStringLiteral("lineEdit_date"));
        lineEdit_date->setGeometry(QRect(304, 142, 231, 47));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEdit_date->sizePolicy().hasHeightForWidth());
        lineEdit_date->setSizePolicy(sizePolicy2);
        lineEdit_date->setFont(font);
        lineEdit_date->setStyleSheet(QLatin1String("QLineEdit {\n"
"    border: 1px solid #a9a9a9;\n"
"    padding: 5px;\n"
"    border-radius: 10px; /* Adjust the value to control the roundness */\n"
"    background-color: #ffffff; /* Set the background color to white */\n"
"    color: #333333;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #3e7bb6;\n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"    background-color: #e6f3ff; /* Set the hover background color to light blue */\n"
"    animation: blink 0.5s alternate infinite; /* Add a blinking animation */\n"
"}\n"
"\n"
"@keyframes blink {\n"
"    from {\n"
"        background-color: #e6f3ff;\n"
"    }\n"
"    to {\n"
"        background-color: #ffffff;\n"
"    }\n"
"}\n"
""));

        retranslateUi(add_qty_part);

        QMetaObject::connectSlotsByName(add_qty_part);
    } // setupUi

    void retranslateUi(QDialog *add_qty_part)
    {
        add_qty_part->setWindowTitle(QApplication::translate("add_qty_part", "ADD PART QUANTITY", 0));
        invoice_num->setText(QApplication::translate("add_qty_part", "INVOICE NUMBER", 0));
        qtyAdd->setText(QApplication::translate("add_qty_part", "QTY TO ADD", 0));
        manufacturer->setText(QApplication::translate("add_qty_part", "MANUFACTURER", 0));
        remark->setText(QApplication::translate("add_qty_part", "REMARK", 0));
        partNum->setText(QApplication::translate("add_qty_part", "PART NO", 0));
        label->setText(QApplication::translate("add_qty_part", "PROJECT", 0));
        pushButton_add_new_proj->setText(QApplication::translate("add_qty_part", "Add New Project", 0));
        pushButton_ref->setText(QString());
        pushButton_addPart->setText(QString());
        pushButton_6->setText(QString());
        pushButton_calender->setText(QString());
        date->setText(QApplication::translate("add_qty_part", "INVOICE DATE", 0));
    } // retranslateUi

};

namespace Ui {
    class add_qty_part: public Ui_add_qty_part {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_QTY_PART_H
