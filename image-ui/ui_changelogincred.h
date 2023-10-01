/********************************************************************************
** Form generated from reading UI file 'changelogincred.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGELOGINCRED_H
#define UI_CHANGELOGINCRED_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_changeLoginCred
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit_del_user;
    QLineEdit *lineEdit_new_user;
    QLineEdit *lineEdit_new_pwd;
    QLineEdit *lineEdit_old_pwd;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *lineEdit_type;
    QLineEdit *lineEdit_old_type;

    void setupUi(QDialog *changeLoginCred)
    {
        if (changeLoginCred->objectName().isEmpty())
            changeLoginCred->setObjectName(QStringLiteral("changeLoginCred"));
        changeLoginCred->resize(1193, 356);
        label = new QLabel(changeLoginCred);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(650, 110, 281, 20));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(changeLoginCred);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 110, 281, 20));
        label_2->setFont(font);
        label_3 = new QLabel(changeLoginCred);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 160, 291, 31));
        label_3->setFont(font);
        label_4 = new QLabel(changeLoginCred);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(650, 170, 281, 21));
        label_4->setFont(font);
        lineEdit_del_user = new QLineEdit(changeLoginCred);
        lineEdit_del_user->setObjectName(QStringLiteral("lineEdit_del_user"));
        lineEdit_del_user->setGeometry(QRect(930, 100, 231, 41));
        QFont font1;
        font1.setPointSize(14);
        lineEdit_del_user->setFont(font1);
        lineEdit_del_user->setStyleSheet(QLatin1String("QLineEdit {\n"
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
        lineEdit_new_user = new QLineEdit(changeLoginCred);
        lineEdit_new_user->setObjectName(QStringLiteral("lineEdit_new_user"));
        lineEdit_new_user->setGeometry(QRect(290, 100, 241, 41));
        lineEdit_new_user->setFont(font1);
        lineEdit_new_user->setStyleSheet(QLatin1String("QLineEdit {\n"
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
        lineEdit_new_pwd = new QLineEdit(changeLoginCred);
        lineEdit_new_pwd->setObjectName(QStringLiteral("lineEdit_new_pwd"));
        lineEdit_new_pwd->setGeometry(QRect(290, 160, 241, 41));
        lineEdit_new_pwd->setFont(font1);
        lineEdit_new_pwd->setStyleSheet(QLatin1String("QLineEdit {\n"
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
        lineEdit_old_pwd = new QLineEdit(changeLoginCred);
        lineEdit_old_pwd->setObjectName(QStringLiteral("lineEdit_old_pwd"));
        lineEdit_old_pwd->setGeometry(QRect(930, 160, 231, 41));
        lineEdit_old_pwd->setFont(font1);
        lineEdit_old_pwd->setStyleSheet(QLatin1String("QLineEdit {\n"
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
        pushButton = new QPushButton(changeLoginCred);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(240, 280, 93, 41));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setWeight(50);
        pushButton->setFont(font2);
        pushButton_2 = new QPushButton(changeLoginCred);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(910, 280, 93, 41));
        QFont font3;
        font3.setPointSize(10);
        pushButton_2->setFont(font3);
        label_5 = new QLabel(changeLoginCred);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(210, 50, 181, 21));
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setWeight(75);
        label_5->setFont(font4);
        label_6 = new QLabel(changeLoginCred);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(760, 50, 311, 31));
        label_6->setFont(font4);
        label_7 = new QLabel(changeLoginCred);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 220, 281, 31));
        label_7->setFont(font);
        label_8 = new QLabel(changeLoginCred);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(660, 230, 271, 20));
        label_8->setFont(font);
        lineEdit_type = new QLineEdit(changeLoginCred);
        lineEdit_type->setObjectName(QStringLiteral("lineEdit_type"));
        lineEdit_type->setGeometry(QRect(290, 220, 241, 41));
        lineEdit_type->setFont(font1);
        lineEdit_type->setStyleSheet(QLatin1String("QLineEdit {\n"
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
        lineEdit_old_type = new QLineEdit(changeLoginCred);
        lineEdit_old_type->setObjectName(QStringLiteral("lineEdit_old_type"));
        lineEdit_old_type->setGeometry(QRect(930, 221, 231, 41));
        lineEdit_old_type->setFont(font1);
        lineEdit_old_type->setStyleSheet(QLatin1String("QLineEdit {\n"
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

        retranslateUi(changeLoginCred);

        QMetaObject::connectSlotsByName(changeLoginCred);
    } // setupUi

    void retranslateUi(QDialog *changeLoginCred)
    {
        changeLoginCred->setWindowTitle(QApplication::translate("changeLoginCred", "Change User Credentials", 0));
        label->setText(QApplication::translate("changeLoginCred", "ENTER OLD USERNAME", 0));
        label_2->setText(QApplication::translate("changeLoginCred", "ENTER NEW USERNAME", 0));
        label_3->setText(QApplication::translate("changeLoginCred", "ENTER NEW PASSWORD", 0));
        label_4->setText(QApplication::translate("changeLoginCred", "ENTER OLD PASSWORD", 0));
        pushButton->setText(QApplication::translate("changeLoginCred", "CREATE", 0));
        pushButton_2->setText(QApplication::translate("changeLoginCred", "DELETE", 0));
        label_5->setText(QApplication::translate("changeLoginCred", "Create New User", 0));
        label_6->setText(QApplication::translate("changeLoginCred", "Delete Credential Of Old User", 0));
        label_7->setText(QApplication::translate("changeLoginCred", "ENTER NEW USER TYPE", 0));
        label_8->setText(QApplication::translate("changeLoginCred", "ENTER OLD USER TYPE", 0));
    } // retranslateUi

};

namespace Ui {
    class changeLoginCred: public Ui_changeLoginCred {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGELOGINCRED_H
