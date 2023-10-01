/********************************************************************************
** Form generated from reading UI file 'managerecipients.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGERECIPIENTS_H
#define UI_MANAGERECIPIENTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_manageRecipients
{
public:
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_search;
    QLineEdit *lineEdit;
    QPushButton *pushButton_addRecipients;
    QPushButton *pushButton_rename_recipients;
    QPushButton *pushButton_edit;
    QPushButton *pushButton_delete_recipients;
    QPushButton *pushButton_refresh;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *manageRecipients)
    {
        if (manageRecipients->objectName().isEmpty())
            manageRecipients->setObjectName(QStringLiteral("manageRecipients"));
        manageRecipients->resize(1221, 576);
        verticalLayout = new QVBoxLayout(manageRecipients);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableView = new QTableView(manageRecipients);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setStyleSheet(QLatin1String("QTableView {\n"
"    border: 1px solid #d9d9d9;\n"
"    background-color: #ffffff;\n"
"    padding: 0;\n"
"    gridline-color: #d9d9d9;\n"
"}\n"
"\n"
"QTableView::item {\n"
"    padding: 5px;\n"
"    border: none;\n"
"}\n"
"\n"
"QTableView::item:selected {\n"
"    background-color: #3e7bb6;\n"
"    color: #ffffff;\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: #f2f2f2;\n"
"    color: #333333;\n"
"    padding: 5px;\n"
"    font-weight: bold;\n"
"    border: none;\n"
"    border-right: 1px solid #d9d9d9;\n"
"    border-bottom: 1px solid #d9d9d9;\n"
"    min-width: 80px;\n"
"    min-height: 30px;\n"
"font-size: 18px;\n"
"}\n"
"\n"
"QHeaderView::section:checked {\n"
"    background-color: #3e7bb6;\n"
"    color: #ffffff;\n"
"}\n"
"\n"
"QHeaderView::section:pressed {\n"
"    background-color: #3e7bb6;\n"
"    color: #ffffff;\n"
"}\n"
"\n"
"QHeaderView::section:first {\n"
"    border-top-left-radius: 5px;\n"
"}\n"
"\n"
"QHeaderView::section:last {\n"
"    border-top-right-radius: 5px;\n"
"    border"
                        "-right: none;\n"
"}\n"
"\n"
"QHeaderView::section:middle {\n"
"    border-right: none;\n"
"}\n"
"\n"
"QTableView::horizontalHeader {\n"
"    border-top: 1px solid #d9d9d9;\n"
"    border-bottom: 1px solid #d9d9d9;\n"
"}\n"
"\n"
"QTableView::verticalHeader {\n"
"    border-right: 1px solid #d9d9d9;\n"
"}\n"
"\n"
"QHeaderView::section:horizontal {\n"
"    background-color: #e2e2e2;\n"
"    border-top: 1px solid #9d9d9d;\n"
"}\n"
"\n"
"QHeaderView::section:horizontal:pressed {\n"
"    background-color: #3e7bb6;\n"
"    color: #ffffff;\n"
"}\n"
""));

        verticalLayout->addWidget(tableView);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_search = new QPushButton(manageRecipients);
        pushButton_search->setObjectName(QStringLiteral("pushButton_search"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Images/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_search->setIcon(icon);
        pushButton_search->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(pushButton_search);

        lineEdit = new QLineEdit(manageRecipients);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QFont font;
        font.setPointSize(16);
        lineEdit->setFont(font);
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

        horizontalLayout->addWidget(lineEdit);

        pushButton_addRecipients = new QPushButton(manageRecipients);
        pushButton_addRecipients->setObjectName(QStringLiteral("pushButton_addRecipients"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_addRecipients->sizePolicy().hasHeightForWidth());
        pushButton_addRecipients->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QStringLiteral("Times New Roman"));
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        pushButton_addRecipients->setFont(font1);
        pushButton_addRecipients->setStyleSheet(QLatin1String("\n"
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

        horizontalLayout->addWidget(pushButton_addRecipients);

        pushButton_rename_recipients = new QPushButton(manageRecipients);
        pushButton_rename_recipients->setObjectName(QStringLiteral("pushButton_rename_recipients"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_rename_recipients->sizePolicy().hasHeightForWidth());
        pushButton_rename_recipients->setSizePolicy(sizePolicy1);
        pushButton_rename_recipients->setFont(font1);
        pushButton_rename_recipients->setStyleSheet(QLatin1String("\n"
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

        horizontalLayout->addWidget(pushButton_rename_recipients);

        pushButton_edit = new QPushButton(manageRecipients);
        pushButton_edit->setObjectName(QStringLiteral("pushButton_edit"));
        sizePolicy.setHeightForWidth(pushButton_edit->sizePolicy().hasHeightForWidth());
        pushButton_edit->setSizePolicy(sizePolicy);
        pushButton_edit->setFont(font1);
        pushButton_edit->setStyleSheet(QLatin1String("\n"
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

        horizontalLayout->addWidget(pushButton_edit);

        pushButton_delete_recipients = new QPushButton(manageRecipients);
        pushButton_delete_recipients->setObjectName(QStringLiteral("pushButton_delete_recipients"));
        sizePolicy.setHeightForWidth(pushButton_delete_recipients->sizePolicy().hasHeightForWidth());
        pushButton_delete_recipients->setSizePolicy(sizePolicy);
        pushButton_delete_recipients->setFont(font1);
        pushButton_delete_recipients->setStyleSheet(QLatin1String("\n"
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

        horizontalLayout->addWidget(pushButton_delete_recipients);

        pushButton_refresh = new QPushButton(manageRecipients);
        pushButton_refresh->setObjectName(QStringLiteral("pushButton_refresh"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Images/refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_refresh->setIcon(icon1);
        pushButton_refresh->setIconSize(QSize(35, 35));

        horizontalLayout->addWidget(pushButton_refresh);


        horizontalLayout_2->addLayout(horizontalLayout);

        horizontalSpacer = new QSpacerItem(338, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(manageRecipients);

        QMetaObject::connectSlotsByName(manageRecipients);
    } // setupUi

    void retranslateUi(QDialog *manageRecipients)
    {
        manageRecipients->setWindowTitle(QApplication::translate("manageRecipients", "Manage Recipients", 0));
        pushButton_search->setText(QString());
        pushButton_addRecipients->setText(QApplication::translate("manageRecipients", "NEW", 0));
        pushButton_rename_recipients->setText(QApplication::translate("manageRecipients", "RENAME", 0));
        pushButton_edit->setText(QApplication::translate("manageRecipients", "EDIT", 0));
        pushButton_delete_recipients->setText(QApplication::translate("manageRecipients", "DELETE", 0));
        pushButton_refresh->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class manageRecipients: public Ui_manageRecipients {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGERECIPIENTS_H
