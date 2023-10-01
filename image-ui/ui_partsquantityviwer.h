/********************************************************************************
** Form generated from reading UI file 'partsquantityviwer.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARTSQUANTITYVIWER_H
#define UI_PARTSQUANTITYVIWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_partsQuantityViwer
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_search;
    QLineEdit *lineEdit;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_refresh;
    QPushButton *pushButton_show_low_parts;
    QTableView *tableView;

    void setupUi(QDialog *partsQuantityViwer)
    {
        if (partsQuantityViwer->objectName().isEmpty())
            partsQuantityViwer->setObjectName(QStringLiteral("partsQuantityViwer"));
        partsQuantityViwer->resize(1014, 416);
        horizontalLayout_2 = new QHBoxLayout(partsQuantityViwer);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_search = new QPushButton(partsQuantityViwer);
        pushButton_search->setObjectName(QStringLiteral("pushButton_search"));
        pushButton_search->setStyleSheet(QStringLiteral(""));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Images/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_search->setIcon(icon);
        pushButton_search->setIconSize(QSize(50, 50));

        horizontalLayout->addWidget(pushButton_search);

        lineEdit = new QLineEdit(partsQuantityViwer);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
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

        comboBox = new QComboBox(partsQuantityViwer);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        sizePolicy.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy);
        comboBox->setFont(font);

        horizontalLayout->addWidget(comboBox);

        horizontalSpacer = new QSpacerItem(90, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_refresh = new QPushButton(partsQuantityViwer);
        pushButton_refresh->setObjectName(QStringLiteral("pushButton_refresh"));
        sizePolicy.setHeightForWidth(pushButton_refresh->sizePolicy().hasHeightForWidth());
        pushButton_refresh->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QStringLiteral("Times New Roman"));
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        pushButton_refresh->setFont(font1);
        pushButton_refresh->setStyleSheet(QLatin1String("\n"
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

        horizontalLayout->addWidget(pushButton_refresh);

        pushButton_show_low_parts = new QPushButton(partsQuantityViwer);
        pushButton_show_low_parts->setObjectName(QStringLiteral("pushButton_show_low_parts"));
        sizePolicy.setHeightForWidth(pushButton_show_low_parts->sizePolicy().hasHeightForWidth());
        pushButton_show_low_parts->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setPointSize(10);
        pushButton_show_low_parts->setFont(font2);

        horizontalLayout->addWidget(pushButton_show_low_parts);


        verticalLayout->addLayout(horizontalLayout);

        tableView = new QTableView(partsQuantityViwer);
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
"    font-size: 18px;\n"
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
"    bo"
                        "rder-right: none;\n"
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


        horizontalLayout_2->addLayout(verticalLayout);


        retranslateUi(partsQuantityViwer);

        QMetaObject::connectSlotsByName(partsQuantityViwer);
    } // setupUi

    void retranslateUi(QDialog *partsQuantityViwer)
    {
        partsQuantityViwer->setWindowTitle(QApplication::translate("partsQuantityViwer", "Parts Quantity Viewer", 0));
        pushButton_search->setText(QString());
        pushButton_refresh->setText(QApplication::translate("partsQuantityViwer", "REFRESH", 0));
        pushButton_show_low_parts->setText(QApplication::translate("partsQuantityViwer", "SHOW LOW PARTS", 0));
    } // retranslateUi

};

namespace Ui {
    class partsQuantityViwer: public Ui_partsQuantityViwer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARTSQUANTITYVIWER_H
