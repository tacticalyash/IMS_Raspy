/********************************************************************************
** Form generated from reading UI file 'generatemrs.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENERATEMRS_H
#define UI_GENERATEMRS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
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

class Ui_generateMRS
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_5;
    QLabel *label;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *lineEdit_MRS;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_Project;
    QLineEdit *lineEdit_Date;
    QTableView *tableView;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_9;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QLineEdit *lineEdit_Part_num;
    QPushButton *pushButton;
    QLabel *label_7;
    QComboBox *combo_manf;
    QLabel *label_8;
    QLineEdit *lineEdit_qty_avail;
    QLabel *label_9;
    QPushButton *pushButton_insert_in_inventory;
    QLineEdit *lineEdit_enter_qty;
    QPushButton *pushButton_add_qt_inventory;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_10;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_6;
    QLineEdit *lineEdit_Authorised;
    QLabel *label_10;
    QComboBox *comboBox_recepient_names;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_ref;

    void setupUi(QDialog *generateMRS)
    {
        if (generateMRS->objectName().isEmpty())
            generateMRS->setObjectName(QStringLiteral("generateMRS"));
        generateMRS->resize(1154, 589);
        gridLayout = new QGridLayout(generateMRS);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label = new QLabel(generateMRS);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);

        verticalLayout_5->addWidget(label);

        label_2 = new QLabel(generateMRS);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        verticalLayout_5->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout_5);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        lineEdit_MRS = new QLineEdit(generateMRS);
        lineEdit_MRS->setObjectName(QStringLiteral("lineEdit_MRS"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_MRS->sizePolicy().hasHeightForWidth());
        lineEdit_MRS->setSizePolicy(sizePolicy);
        lineEdit_MRS->setFont(font);
        lineEdit_MRS->setStyleSheet(QLatin1String("QLineEdit {\n"
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
"  \n"
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

        verticalLayout_4->addWidget(lineEdit_MRS);

        comboBox = new QComboBox(generateMRS);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(16);
        comboBox->setFont(font1);

        verticalLayout_4->addWidget(comboBox);


        horizontalLayout->addLayout(verticalLayout_4);


        horizontalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_3 = new QLabel(generateMRS);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        verticalLayout_3->addWidget(label_3);

        label_4 = new QLabel(generateMRS);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        verticalLayout_3->addWidget(label_4);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lineEdit_Project = new QLineEdit(generateMRS);
        lineEdit_Project->setObjectName(QStringLiteral("lineEdit_Project"));
        sizePolicy.setHeightForWidth(lineEdit_Project->sizePolicy().hasHeightForWidth());
        lineEdit_Project->setSizePolicy(sizePolicy);
        lineEdit_Project->setFont(font);
        lineEdit_Project->setStyleSheet(QLatin1String("QLineEdit {\n"
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
"  \n"
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

        verticalLayout->addWidget(lineEdit_Project);

        lineEdit_Date = new QLineEdit(generateMRS);
        lineEdit_Date->setObjectName(QStringLiteral("lineEdit_Date"));
        sizePolicy.setHeightForWidth(lineEdit_Date->sizePolicy().hasHeightForWidth());
        lineEdit_Date->setSizePolicy(sizePolicy);
        lineEdit_Date->setFont(font);
        lineEdit_Date->setStyleSheet(QLatin1String("QLineEdit {\n"
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
"   \n"
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

        verticalLayout->addWidget(lineEdit_Date);


        horizontalLayout_2->addLayout(verticalLayout);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_6->addLayout(horizontalLayout_3);

        tableView = new QTableView(generateMRS);
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

        verticalLayout_6->addWidget(tableView);


        gridLayout->addLayout(verticalLayout_6, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_5 = new QLabel(generateMRS);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);

        horizontalLayout_7->addWidget(label_5);

        lineEdit_Part_num = new QLineEdit(generateMRS);
        lineEdit_Part_num->setObjectName(QStringLiteral("lineEdit_Part_num"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEdit_Part_num->sizePolicy().hasHeightForWidth());
        lineEdit_Part_num->setSizePolicy(sizePolicy2);
        lineEdit_Part_num->setFont(font);
        lineEdit_Part_num->setStyleSheet(QLatin1String("QLineEdit {\n"
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
"\n"
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

        horizontalLayout_7->addWidget(lineEdit_Part_num);


        horizontalLayout_9->addLayout(horizontalLayout_7);

        pushButton = new QPushButton(generateMRS);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setFamily(QStringLiteral("Times New Roman"));
        font2.setPointSize(14);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        pushButton->setFont(font2);
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

        horizontalLayout_9->addWidget(pushButton);

        label_7 = new QLabel(generateMRS);
        label_7->setObjectName(QStringLiteral("label_7"));
        sizePolicy1.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy1);
        label_7->setFont(font);

        horizontalLayout_9->addWidget(label_7);

        combo_manf = new QComboBox(generateMRS);
        combo_manf->setObjectName(QStringLiteral("combo_manf"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(combo_manf->sizePolicy().hasHeightForWidth());
        combo_manf->setSizePolicy(sizePolicy3);
        combo_manf->setFont(font);

        horizontalLayout_9->addWidget(combo_manf);

        label_8 = new QLabel(generateMRS);
        label_8->setObjectName(QStringLiteral("label_8"));
        sizePolicy1.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy1);
        label_8->setFont(font);

        horizontalLayout_9->addWidget(label_8);

        lineEdit_qty_avail = new QLineEdit(generateMRS);
        lineEdit_qty_avail->setObjectName(QStringLiteral("lineEdit_qty_avail"));
        sizePolicy3.setHeightForWidth(lineEdit_qty_avail->sizePolicy().hasHeightForWidth());
        lineEdit_qty_avail->setSizePolicy(sizePolicy3);
        lineEdit_qty_avail->setFont(font);
        lineEdit_qty_avail->setStyleSheet(QLatin1String("QLineEdit {\n"
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
"\n"
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

        horizontalLayout_9->addWidget(lineEdit_qty_avail);

        label_9 = new QLabel(generateMRS);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font);

        horizontalLayout_9->addWidget(label_9);

        pushButton_insert_in_inventory = new QPushButton(generateMRS);
        pushButton_insert_in_inventory->setObjectName(QStringLiteral("pushButton_insert_in_inventory"));
        QSizePolicy sizePolicy4(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(pushButton_insert_in_inventory->sizePolicy().hasHeightForWidth());
        pushButton_insert_in_inventory->setSizePolicy(sizePolicy4);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Images/RightArrow.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_insert_in_inventory->setIcon(icon);
        pushButton_insert_in_inventory->setIconSize(QSize(30, 30));

        horizontalLayout_9->addWidget(pushButton_insert_in_inventory);

        lineEdit_enter_qty = new QLineEdit(generateMRS);
        lineEdit_enter_qty->setObjectName(QStringLiteral("lineEdit_enter_qty"));
        lineEdit_enter_qty->setFont(font);
        lineEdit_enter_qty->setStyleSheet(QLatin1String("QLineEdit {\n"
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
"\n"
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

        horizontalLayout_9->addWidget(lineEdit_enter_qty);

        pushButton_add_qt_inventory = new QPushButton(generateMRS);
        pushButton_add_qt_inventory->setObjectName(QStringLiteral("pushButton_add_qt_inventory"));
        pushButton_add_qt_inventory->setIcon(icon);
        pushButton_add_qt_inventory->setIconSize(QSize(35, 35));

        horizontalLayout_9->addWidget(pushButton_add_qt_inventory);

        horizontalSpacer = new QSpacerItem(288, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_6 = new QLabel(generateMRS);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);

        horizontalLayout_8->addWidget(label_6);

        lineEdit_Authorised = new QLineEdit(generateMRS);
        lineEdit_Authorised->setObjectName(QStringLiteral("lineEdit_Authorised"));
        sizePolicy2.setHeightForWidth(lineEdit_Authorised->sizePolicy().hasHeightForWidth());
        lineEdit_Authorised->setSizePolicy(sizePolicy2);
        lineEdit_Authorised->setFont(font);
        lineEdit_Authorised->setStyleSheet(QLatin1String("QLineEdit {\n"
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
"\n"
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

        horizontalLayout_8->addWidget(lineEdit_Authorised);


        horizontalLayout_10->addLayout(horizontalLayout_8);

        label_10 = new QLabel(generateMRS);
        label_10->setObjectName(QStringLiteral("label_10"));
        QFont font3;
        font3.setPointSize(14);
        font3.setBold(false);
        font3.setWeight(50);
        label_10->setFont(font3);

        horizontalLayout_10->addWidget(label_10);

        comboBox_recepient_names = new QComboBox(generateMRS);
        comboBox_recepient_names->setObjectName(QStringLiteral("comboBox_recepient_names"));
        sizePolicy1.setHeightForWidth(comboBox_recepient_names->sizePolicy().hasHeightForWidth());
        comboBox_recepient_names->setSizePolicy(sizePolicy1);
        comboBox_recepient_names->setFont(font);

        horizontalLayout_10->addWidget(comboBox_recepient_names);

        horizontalSpacer_2 = new QSpacerItem(358, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_2);

        pushButton_3 = new QPushButton(generateMRS);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);
        pushButton_3->setFont(font2);
        pushButton_3->setStyleSheet(QLatin1String("\n"
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

        horizontalLayout_10->addWidget(pushButton_3);

        pushButton_ref = new QPushButton(generateMRS);
        pushButton_ref->setObjectName(QStringLiteral("pushButton_ref"));
        sizePolicy1.setHeightForWidth(pushButton_ref->sizePolicy().hasHeightForWidth());
        pushButton_ref->setSizePolicy(sizePolicy1);
        pushButton_ref->setFont(font2);
        pushButton_ref->setStyleSheet(QLatin1String("\n"
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

        horizontalLayout_10->addWidget(pushButton_ref);


        verticalLayout_2->addLayout(horizontalLayout_10);


        gridLayout->addLayout(verticalLayout_2, 1, 0, 1, 1);


        retranslateUi(generateMRS);

        QMetaObject::connectSlotsByName(generateMRS);
    } // setupUi

    void retranslateUi(QDialog *generateMRS)
    {
        generateMRS->setWindowTitle(QApplication::translate("generateMRS", "Generate MRS", 0));
        label->setText(QApplication::translate("generateMRS", "    MRS No", 0));
        label_2->setText(QApplication::translate("generateMRS", "Area/Stage", 0));
        label_3->setText(QApplication::translate("generateMRS", "Project", 0));
        label_4->setText(QApplication::translate("generateMRS", "   Date", 0));
        label_5->setText(QApplication::translate("generateMRS", "Part Number", 0));
        pushButton->setText(QApplication::translate("generateMRS", "Add", 0));
        label_7->setText(QApplication::translate("generateMRS", "Manufacturer", 0));
        label_8->setText(QApplication::translate("generateMRS", "QTY Available", 0));
        label_9->setText(QApplication::translate("generateMRS", "Enter Qty", 0));
        pushButton_insert_in_inventory->setText(QString());
        pushButton_add_qt_inventory->setText(QString());
        label_6->setText(QApplication::translate("generateMRS", "Authorised By", 0));
        label_10->setText(QApplication::translate("generateMRS", "Select Recipient :-", 0));
        pushButton_3->setText(QApplication::translate("generateMRS", "Generate Slip", 0));
        pushButton_ref->setText(QApplication::translate("generateMRS", "Refresh", 0));
    } // retranslateUi

};

namespace Ui {
    class generateMRS: public Ui_generateMRS {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENERATEMRS_H
