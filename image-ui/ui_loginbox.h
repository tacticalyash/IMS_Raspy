/********************************************************************************
** Form generated from reading UI file 'loginbox.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINBOX_H
#define UI_LOGINBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loginBox
{
public:
    QGroupBox *groupBox;
    QLabel *label_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *loginBox)
    {
        if (loginBox->objectName().isEmpty())
            loginBox->setObjectName(QStringLiteral("loginBox"));
        loginBox->resize(699, 352);
        groupBox = new QGroupBox(loginBox);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 681, 331));
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        groupBox->setFont(font);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 100, 121, 121));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/Images/login.png")));
        label_3->setScaledContents(true);
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(210, 250, 131, 41));
        pushButton->setStyleSheet(QLatin1String("\n"
"QPushButton{\n"
"\n"
"	\n"
"\n"
"	font: 14pt \"Times New Roman\";  \n"
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
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(380, 250, 121, 41));
        pushButton_2->setStyleSheet(QLatin1String("\n"
"QPushButton{\n"
"\n"
"	\n"
"\n"
"	font: 14pt \"Times New Roman\";  \n"
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
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(403, 122, 258, 103));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QFont font1;
        font1.setPointSize(16);
        lineEdit->setFont(font1);
        lineEdit->setStyleSheet(QLatin1String("QLineEdit {\n"
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
"    \n"
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

        verticalLayout->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setFont(font1);
        lineEdit_2->setStyleSheet(QLatin1String("QLineEdit {\n"
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
"    \n"
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

        verticalLayout->addWidget(lineEdit_2);

        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(203, 122, 210, 101));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));
        QFont font2;
        font2.setFamily(QStringLiteral("Times New Roman"));
        font2.setPointSize(20);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font2);

        verticalLayout_2->addWidget(label_2);


        retranslateUi(loginBox);

        QMetaObject::connectSlotsByName(loginBox);
    } // setupUi

    void retranslateUi(QDialog *loginBox)
    {
        loginBox->setWindowTitle(QApplication::translate("loginBox", "Login", 0));
        groupBox->setTitle(QApplication::translate("loginBox", "SignIn", 0));
        label_3->setText(QString());
        pushButton->setText(QApplication::translate("loginBox", "Login", 0));
        pushButton_2->setText(QApplication::translate("loginBox", "Cancel", 0));
        label->setText(QApplication::translate("loginBox", "USERNAME:", 0));
        label_2->setText(QApplication::translate("loginBox", " PASSWORD:", 0));
    } // retranslateUi

};

namespace Ui {
    class loginBox: public Ui_loginBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINBOX_H
