/********************************************************************************
** Form generated from reading UI file 'add_user.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_USER_H
#define UI_ADD_USER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_add_user
{
public:
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_search_inv;
    QLineEdit *lineEdit;
    QComboBox *comboBox_invent;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton_moveTo_project;
    QPushButton *pushButton_moveTo_inventory;
    QPushButton *pushButton_allmove_inventory;
    QPushButton *pushButton_issued;
    QPushButton *pushButton_refresh_all;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QTableView *tableView_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_search_proj;
    QLineEdit *lineEdit_2;
    QComboBox *comboBox_project;

    void setupUi(QDialog *add_user)
    {
        if (add_user->objectName().isEmpty())
            add_user->setObjectName(QStringLiteral("add_user"));
        add_user->resize(1272, 742);
        verticalLayout_4 = new QVBoxLayout(add_user);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(add_user);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(18);
        label->setFont(font);

        verticalLayout_2->addWidget(label);

        tableView = new QTableView(add_user);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout_2->addWidget(tableView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_search_inv = new QPushButton(add_user);
        pushButton_search_inv->setObjectName(QStringLiteral("pushButton_search_inv"));
        QFont font1;
        font1.setPointSize(14);
        pushButton_search_inv->setFont(font1);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Images/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_search_inv->setIcon(icon);
        pushButton_search_inv->setIconSize(QSize(50, 50));

        horizontalLayout->addWidget(pushButton_search_inv);

        lineEdit = new QLineEdit(add_user);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setPointSize(16);
        lineEdit->setFont(font2);
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

        comboBox_invent = new QComboBox(add_user);
        comboBox_invent->setObjectName(QStringLiteral("comboBox_invent"));
        sizePolicy1.setHeightForWidth(comboBox_invent->sizePolicy().hasHeightForWidth());
        comboBox_invent->setSizePolicy(sizePolicy1);
        comboBox_invent->setFont(font2);

        horizontalLayout->addWidget(comboBox_invent);


        verticalLayout_2->addLayout(horizontalLayout);


        horizontalLayout_4->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 158, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        pushButton_moveTo_project = new QPushButton(add_user);
        pushButton_moveTo_project->setObjectName(QStringLiteral("pushButton_moveTo_project"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Images/RightArrow.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_moveTo_project->setIcon(icon1);
        pushButton_moveTo_project->setIconSize(QSize(80, 80));

        verticalLayout->addWidget(pushButton_moveTo_project);

        pushButton_moveTo_inventory = new QPushButton(add_user);
        pushButton_moveTo_inventory->setObjectName(QStringLiteral("pushButton_moveTo_inventory"));
        pushButton_moveTo_inventory->setFont(font1);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Images/LeftArrow.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_moveTo_inventory->setIcon(icon2);
        pushButton_moveTo_inventory->setIconSize(QSize(80, 80));

        verticalLayout->addWidget(pushButton_moveTo_inventory);

        pushButton_allmove_inventory = new QPushButton(add_user);
        pushButton_allmove_inventory->setObjectName(QStringLiteral("pushButton_allmove_inventory"));
        QSizePolicy sizePolicy2(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_allmove_inventory->sizePolicy().hasHeightForWidth());
        pushButton_allmove_inventory->setSizePolicy(sizePolicy2);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Images/shift.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_allmove_inventory->setIcon(icon3);
        pushButton_allmove_inventory->setIconSize(QSize(70, 70));

        verticalLayout->addWidget(pushButton_allmove_inventory);

        pushButton_issued = new QPushButton(add_user);
        pushButton_issued->setObjectName(QStringLiteral("pushButton_issued"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Images/issue.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_issued->setIcon(icon4);
        pushButton_issued->setIconSize(QSize(70, 70));

        verticalLayout->addWidget(pushButton_issued);

        pushButton_refresh_all = new QPushButton(add_user);
        pushButton_refresh_all->setObjectName(QStringLiteral("pushButton_refresh_all"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/Images/refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_refresh_all->setIcon(icon5);
        pushButton_refresh_all->setIconSize(QSize(70, 70));

        verticalLayout->addWidget(pushButton_refresh_all);

        verticalSpacer = new QSpacerItem(20, 228, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_4->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(add_user);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy3);
        label_2->setFont(font);

        horizontalLayout_3->addWidget(label_2);


        verticalLayout_3->addLayout(horizontalLayout_3);

        tableView_2 = new QTableView(add_user);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));

        verticalLayout_3->addWidget(tableView_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_search_proj = new QPushButton(add_user);
        pushButton_search_proj->setObjectName(QStringLiteral("pushButton_search_proj"));
        pushButton_search_proj->setIcon(icon);
        pushButton_search_proj->setIconSize(QSize(50, 50));

        horizontalLayout_2->addWidget(pushButton_search_proj);

        lineEdit_2 = new QLineEdit(add_user);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy4);
        lineEdit_2->setFont(font2);
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

        horizontalLayout_2->addWidget(lineEdit_2);

        comboBox_project = new QComboBox(add_user);
        comboBox_project->setObjectName(QStringLiteral("comboBox_project"));
        sizePolicy1.setHeightForWidth(comboBox_project->sizePolicy().hasHeightForWidth());
        comboBox_project->setSizePolicy(sizePolicy1);
        comboBox_project->setFont(font2);

        horizontalLayout_2->addWidget(comboBox_project);


        verticalLayout_3->addLayout(horizontalLayout_2);


        horizontalLayout_4->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout_4);


        retranslateUi(add_user);

        QMetaObject::connectSlotsByName(add_user);
    } // setupUi

    void retranslateUi(QDialog *add_user)
    {
        add_user->setWindowTitle(QApplication::translate("add_user", "Edit Projects", 0));
        label->setText(QApplication::translate("add_user", "                                     Inventory", 0));
        pushButton_search_inv->setText(QString());
#ifndef QT_NO_WHATSTHIS
        pushButton_moveTo_project->setWhatsThis(QApplication::translate("add_user", "<html><head/><body><p>export part quantity to Project</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        pushButton_moveTo_project->setText(QString());
#ifndef QT_NO_WHATSTHIS
        pushButton_moveTo_inventory->setWhatsThis(QApplication::translate("add_user", "<html><head/><body><p>import part quantity from project</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        pushButton_moveTo_inventory->setText(QString());
        pushButton_allmove_inventory->setText(QString());
#ifndef QT_NO_WHATSTHIS
        pushButton_issued->setWhatsThis(QApplication::translate("add_user", "<html><head/><body><p>Issue Quantity</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        pushButton_issued->setText(QString());
#ifndef QT_NO_WHATSTHIS
        pushButton_refresh_all->setWhatsThis(QApplication::translate("add_user", "<html><head/><body><p>Refresh  Inventory </p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        pushButton_refresh_all->setText(QString());
        label_2->setText(QApplication::translate("add_user", "Project :-", 0));
        pushButton_search_proj->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class add_user: public Ui_add_user {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_USER_H
