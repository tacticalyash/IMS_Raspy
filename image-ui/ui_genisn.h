/********************************************************************************
** Form generated from reading UI file 'genisn.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENISN_H
#define UI_GENISN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GenISN
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *lineEdit_Gen_ISN;
    QLineEdit *lineEdit_SUP;
    QLineEdit *lineEdit_Order_ref;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *lineEdit_date;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEdit_INV_NO;
    QPushButton *pushButton_fetch_table;
    QLineEdit *lineEdit_INV_Date;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QLineEdit *lineEdit_Insp;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout;
    QLabel *label_8;
    QLineEdit *lineEdit_IR;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_add_lineditData;
    QPushButton *pushButton_gen_slip;

    void setupUi(QDialog *GenISN)
    {
        if (GenISN->objectName().isEmpty())
            GenISN->setObjectName(QStringLiteral("GenISN"));
        GenISN->resize(1051, 616);
        gridLayout = new QGridLayout(GenISN);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label = new QLabel(GenISN);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(14);
        font.setBold(false);
        font.setWeight(50);
        label->setFont(font);

        verticalLayout_4->addWidget(label);

        label_2 = new QLabel(GenISN);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        verticalLayout_4->addWidget(label_2);

        label_3 = new QLabel(GenISN);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        verticalLayout_4->addWidget(label_3);


        horizontalLayout_5->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        lineEdit_Gen_ISN = new QLineEdit(GenISN);
        lineEdit_Gen_ISN->setObjectName(QStringLiteral("lineEdit_Gen_ISN"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_Gen_ISN->sizePolicy().hasHeightForWidth());
        lineEdit_Gen_ISN->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(14);
        lineEdit_Gen_ISN->setFont(font1);
        lineEdit_Gen_ISN->setStyleSheet(QLatin1String("QLineEdit {\n"
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

        verticalLayout_3->addWidget(lineEdit_Gen_ISN);

        lineEdit_SUP = new QLineEdit(GenISN);
        lineEdit_SUP->setObjectName(QStringLiteral("lineEdit_SUP"));
        sizePolicy.setHeightForWidth(lineEdit_SUP->sizePolicy().hasHeightForWidth());
        lineEdit_SUP->setSizePolicy(sizePolicy);
        lineEdit_SUP->setFont(font1);
        lineEdit_SUP->setStyleSheet(QLatin1String("QLineEdit {\n"
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

        verticalLayout_3->addWidget(lineEdit_SUP);

        lineEdit_Order_ref = new QLineEdit(GenISN);
        lineEdit_Order_ref->setObjectName(QStringLiteral("lineEdit_Order_ref"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit_Order_ref->sizePolicy().hasHeightForWidth());
        lineEdit_Order_ref->setSizePolicy(sizePolicy1);
        lineEdit_Order_ref->setFont(font1);
        lineEdit_Order_ref->setStyleSheet(QLatin1String("QLineEdit {\n"
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

        verticalLayout_3->addWidget(lineEdit_Order_ref);


        horizontalLayout_5->addLayout(verticalLayout_3);


        horizontalLayout_8->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_4 = new QLabel(GenISN);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);

        verticalLayout_2->addWidget(label_4);

        label_5 = new QLabel(GenISN);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font1);

        verticalLayout_2->addWidget(label_5);

        label_6 = new QLabel(GenISN);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font1);

        verticalLayout_2->addWidget(label_6);


        horizontalLayout_7->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        lineEdit_date = new QLineEdit(GenISN);
        lineEdit_date->setObjectName(QStringLiteral("lineEdit_date"));
        lineEdit_date->setFont(font1);
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

        horizontalLayout_4->addWidget(lineEdit_date);

        pushButton = new QPushButton(GenISN);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy2);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Images/date.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(25, 25));

        horizontalLayout_4->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        lineEdit_INV_NO = new QLineEdit(GenISN);
        lineEdit_INV_NO->setObjectName(QStringLiteral("lineEdit_INV_NO"));
        sizePolicy1.setHeightForWidth(lineEdit_INV_NO->sizePolicy().hasHeightForWidth());
        lineEdit_INV_NO->setSizePolicy(sizePolicy1);
        lineEdit_INV_NO->setFont(font1);
        lineEdit_INV_NO->setStyleSheet(QLatin1String("QLineEdit {\n"
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

        horizontalLayout_3->addWidget(lineEdit_INV_NO);

        pushButton_fetch_table = new QPushButton(GenISN);
        pushButton_fetch_table->setObjectName(QStringLiteral("pushButton_fetch_table"));
        sizePolicy2.setHeightForWidth(pushButton_fetch_table->sizePolicy().hasHeightForWidth());
        pushButton_fetch_table->setSizePolicy(sizePolicy2);
        pushButton_fetch_table->setFont(font1);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Images/refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_fetch_table->setIcon(icon1);
        pushButton_fetch_table->setIconSize(QSize(25, 25));

        horizontalLayout_3->addWidget(pushButton_fetch_table);


        verticalLayout->addLayout(horizontalLayout_3);

        lineEdit_INV_Date = new QLineEdit(GenISN);
        lineEdit_INV_Date->setObjectName(QStringLiteral("lineEdit_INV_Date"));
        sizePolicy1.setHeightForWidth(lineEdit_INV_Date->sizePolicy().hasHeightForWidth());
        lineEdit_INV_Date->setSizePolicy(sizePolicy1);
        lineEdit_INV_Date->setFont(font1);
        lineEdit_INV_Date->setStyleSheet(QLatin1String("QLineEdit {\n"
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

        verticalLayout->addWidget(lineEdit_INV_Date);


        horizontalLayout_7->addLayout(verticalLayout);


        horizontalLayout_8->addLayout(horizontalLayout_7);


        verticalLayout_5->addLayout(horizontalLayout_8);

        tableView = new QTableView(GenISN);
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
"    border-right: none;\n"
"}\n"
""
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

        verticalLayout_5->addWidget(tableView);


        gridLayout->addLayout(verticalLayout_5, 0, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_7 = new QLabel(GenISN);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font1);

        horizontalLayout_2->addWidget(label_7);

        lineEdit_Insp = new QLineEdit(GenISN);
        lineEdit_Insp->setObjectName(QStringLiteral("lineEdit_Insp"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lineEdit_Insp->sizePolicy().hasHeightForWidth());
        lineEdit_Insp->setSizePolicy(sizePolicy3);
        lineEdit_Insp->setFont(font1);
        lineEdit_Insp->setStyleSheet(QLatin1String("QLineEdit {\n"
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

        horizontalLayout_2->addWidget(lineEdit_Insp);


        horizontalLayout_6->addLayout(horizontalLayout_2);

        horizontalSpacer_6 = new QSpacerItem(568, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);


        gridLayout->addLayout(horizontalLayout_6, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_8 = new QLabel(GenISN);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font1);

        horizontalLayout->addWidget(label_8);

        lineEdit_IR = new QLineEdit(GenISN);
        lineEdit_IR->setObjectName(QStringLiteral("lineEdit_IR"));
        sizePolicy3.setHeightForWidth(lineEdit_IR->sizePolicy().hasHeightForWidth());
        lineEdit_IR->setSizePolicy(sizePolicy3);
        lineEdit_IR->setFont(font1);
        lineEdit_IR->setStyleSheet(QLatin1String("QLineEdit {\n"
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

        horizontalLayout->addWidget(lineEdit_IR);

        horizontalSpacer = new QSpacerItem(318, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_add_lineditData = new QPushButton(GenISN);
        pushButton_add_lineditData->setObjectName(QStringLiteral("pushButton_add_lineditData"));
        sizePolicy3.setHeightForWidth(pushButton_add_lineditData->sizePolicy().hasHeightForWidth());
        pushButton_add_lineditData->setSizePolicy(sizePolicy3);
        QFont font2;
        font2.setFamily(QStringLiteral("Times New Roman"));
        font2.setPointSize(14);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        pushButton_add_lineditData->setFont(font2);
        pushButton_add_lineditData->setStyleSheet(QLatin1String("\n"
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

        horizontalLayout->addWidget(pushButton_add_lineditData);

        pushButton_gen_slip = new QPushButton(GenISN);
        pushButton_gen_slip->setObjectName(QStringLiteral("pushButton_gen_slip"));
        sizePolicy3.setHeightForWidth(pushButton_gen_slip->sizePolicy().hasHeightForWidth());
        pushButton_gen_slip->setSizePolicy(sizePolicy3);
        pushButton_gen_slip->setFont(font2);
        pushButton_gen_slip->setStyleSheet(QLatin1String("\n"
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

        horizontalLayout->addWidget(pushButton_gen_slip);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);


        retranslateUi(GenISN);

        QMetaObject::connectSlotsByName(GenISN);
    } // setupUi

    void retranslateUi(QDialog *GenISN)
    {
        GenISN->setWindowTitle(QApplication::translate("GenISN", "Generate ISN", 0));
        label->setText(QApplication::translate("GenISN", "         ISN No.", 0));
        label_2->setText(QApplication::translate("GenISN", "       Supplier", 0));
        label_3->setText(QApplication::translate("GenISN", "Our Order Ref", 0));
        label_4->setText(QApplication::translate("GenISN", "           Date", 0));
        label_5->setText(QApplication::translate("GenISN", "   Invoice No", 0));
        label_6->setText(QApplication::translate("GenISN", "Invoice Date", 0));
        pushButton->setText(QString());
        pushButton_fetch_table->setText(QString());
        label_7->setText(QApplication::translate("GenISN", "Inspection Remarks", 0));
        label_8->setText(QApplication::translate("GenISN", "IR Number", 0));
        pushButton_add_lineditData->setText(QApplication::translate("GenISN", "Generate Slip", 0));
        pushButton_gen_slip->setText(QApplication::translate("GenISN", "Refresh", 0));
    } // retranslateUi

};

namespace Ui {
    class GenISN: public Ui_GenISN {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENISN_H
