/********************************************************************************
** Form generated from reading UI file 'addnewpart.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNEWPART_H
#define UI_ADDNEWPART_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_addNewPart
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_18;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label;
    QSpacerItem *horizontalSpacer_13;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_19;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QLineEdit *lineEdit_Part_No;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QLineEdit *lineEdit_Part_Name;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_22;
    QLabel *label_4;
    QLineEdit *lineEdit_Descrp;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_5;
    QLineEdit *lineEdit_avl_qty;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_6;
    QLineEdit *lineEdit_min_qty;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_7;
    QLineEdit *lineEdit_val;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_15;
    QLineEdit *lineEdit_Remark;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_21;
    QLabel *label_8;
    QComboBox *comboBox_grade;
    QLabel *label_19;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_9;
    QLineEdit *lineEdit_Manf;
    QSpacerItem *horizontalSpacer_12;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_21;
    QLabel *label_10;
    QLineEdit *lineEdit_footp;
    QSpacerItem *horizontalSpacer_11;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_20;
    QLabel *label_11;
    QLineEdit *lineEdit_Temp;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_25;
    QLabel *label_13;
    QLineEdit *lineEdit_Location;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout;
    QLabel *label_18;
    QLabel *label_12;
    QLineEdit *lineEdit_Date;
    QPushButton *pushButton_calender;
    QSpacerItem *horizontalSpacer_16;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_14;
    QLineEdit *lineEdit_invo_num;
    QSpacerItem *horizontalSpacer_17;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_24;
    QLabel *label_16;
    QLineEdit *lineEdit_Proj;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *horizontalLayout_17;
    QSpacerItem *horizontalSpacer_14;
    QPushButton *pushButton_addnew_proj;
    QSpacerItem *horizontalSpacer_18;
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer_20;
    QLabel *label_17;
    QPushButton *pushButton_add;
    QPushButton *pushButton_exit;
    QSpacerItem *horizontalSpacer_15;
    QPushButton *pushButton_clear;
    QSpacerItem *horizontalSpacer_19;

    void setupUi(QDialog *addNewPart)
    {
        if (addNewPart->objectName().isEmpty())
            addNewPart->setObjectName(QStringLiteral("addNewPart"));
        addNewPart->resize(1253, 567);
        gridLayout_2 = new QGridLayout(addNewPart);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_9);

        label = new QLabel(addNewPart);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Liberation Serif"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        horizontalLayout_18->addWidget(label);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_13);


        verticalLayout_3->addLayout(horizontalLayout_18);

        groupBox = new QGroupBox(addNewPart);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setStyleSheet(QLatin1String("QGroupBox \n"
"{\n"
" border: none; \n"
"}"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);

        horizontalLayout_2->addWidget(label_2);

        lineEdit_Part_No = new QLineEdit(groupBox);
        lineEdit_Part_No->setObjectName(QStringLiteral("lineEdit_Part_No"));
        QFont font2;
        font2.setPointSize(16);
        lineEdit_Part_No->setFont(font2);
        lineEdit_Part_No->setStyleSheet(QLatin1String("QLineEdit {\n"
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

        horizontalLayout_2->addWidget(lineEdit_Part_No);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);

        horizontalLayout_3->addWidget(label_3);

        lineEdit_Part_Name = new QLineEdit(groupBox);
        lineEdit_Part_Name->setObjectName(QStringLiteral("lineEdit_Part_Name"));
        lineEdit_Part_Name->setFont(font2);
        lineEdit_Part_Name->setStyleSheet(QLatin1String("QLineEdit {\n"
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

        horizontalLayout_3->addWidget(lineEdit_Part_Name);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_22 = new QLabel(groupBox);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setStyleSheet(QLatin1String("font: 25pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 249, 237, 0);"));

        horizontalLayout_4->addWidget(label_22);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);

        horizontalLayout_4->addWidget(label_4);

        lineEdit_Descrp = new QLineEdit(groupBox);
        lineEdit_Descrp->setObjectName(QStringLiteral("lineEdit_Descrp"));
        lineEdit_Descrp->setFont(font2);
        lineEdit_Descrp->setStyleSheet(QLatin1String("QLineEdit {\n"
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

        horizontalLayout_4->addWidget(lineEdit_Descrp);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font1);

        horizontalLayout_5->addWidget(label_5);

        lineEdit_avl_qty = new QLineEdit(groupBox);
        lineEdit_avl_qty->setObjectName(QStringLiteral("lineEdit_avl_qty"));
        lineEdit_avl_qty->setFont(font2);
        lineEdit_avl_qty->setStyleSheet(QLatin1String("QLineEdit {\n"
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

        horizontalLayout_5->addWidget(lineEdit_avl_qty);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font1);

        horizontalLayout_6->addWidget(label_6);

        lineEdit_min_qty = new QLineEdit(groupBox);
        lineEdit_min_qty->setObjectName(QStringLiteral("lineEdit_min_qty"));
        lineEdit_min_qty->setFont(font2);
        lineEdit_min_qty->setStyleSheet(QLatin1String("QLineEdit {\n"
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

        horizontalLayout_6->addWidget(lineEdit_min_qty);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font1);

        horizontalLayout_7->addWidget(label_7);

        lineEdit_val = new QLineEdit(groupBox);
        lineEdit_val->setObjectName(QStringLiteral("lineEdit_val"));
        lineEdit_val->setFont(font2);
        lineEdit_val->setStyleSheet(QLatin1String("QLineEdit {\n"
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

        horizontalLayout_7->addWidget(lineEdit_val);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_6);

        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setFont(font1);

        horizontalLayout_9->addWidget(label_15);

        lineEdit_Remark = new QLineEdit(groupBox);
        lineEdit_Remark->setObjectName(QStringLiteral("lineEdit_Remark"));
        lineEdit_Remark->setFont(font2);
        lineEdit_Remark->setStyleSheet(QLatin1String("QLineEdit {\n"
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

        horizontalLayout_9->addWidget(lineEdit_Remark);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_21);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font1);

        horizontalLayout_8->addWidget(label_8);

        comboBox_grade = new QComboBox(groupBox);
        comboBox_grade->setObjectName(QStringLiteral("comboBox_grade"));
        comboBox_grade->setFont(font2);

        horizontalLayout_8->addWidget(comboBox_grade);

        label_19 = new QLabel(groupBox);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setStyleSheet(QLatin1String("font: 15pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 249, 237, 0);"));

        horizontalLayout_8->addWidget(label_19);


        verticalLayout->addLayout(horizontalLayout_8);


        horizontalLayout_19->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font1);

        horizontalLayout_10->addWidget(label_9);

        lineEdit_Manf = new QLineEdit(groupBox);
        lineEdit_Manf->setObjectName(QStringLiteral("lineEdit_Manf"));
        lineEdit_Manf->setFont(font2);
        lineEdit_Manf->setStyleSheet(QLatin1String("QLineEdit {\n"
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

        horizontalLayout_10->addWidget(lineEdit_Manf);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_12);


        verticalLayout_2->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_21 = new QLabel(groupBox);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setStyleSheet(QStringLiteral("color: rgb(255, 249, 237, 0);"));

        horizontalLayout_11->addWidget(label_21);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font1);

        horizontalLayout_11->addWidget(label_10);

        lineEdit_footp = new QLineEdit(groupBox);
        lineEdit_footp->setObjectName(QStringLiteral("lineEdit_footp"));
        lineEdit_footp->setFont(font2);
        lineEdit_footp->setStyleSheet(QLatin1String("QLineEdit {\n"
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

        horizontalLayout_11->addWidget(lineEdit_footp);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_11);


        verticalLayout_2->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_20 = new QLabel(groupBox);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setStyleSheet(QStringLiteral("color: rgb(255, 249, 237, 0);"));

        horizontalLayout_12->addWidget(label_20);

        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font1);

        horizontalLayout_12->addWidget(label_11);

        lineEdit_Temp = new QLineEdit(groupBox);
        lineEdit_Temp->setObjectName(QStringLiteral("lineEdit_Temp"));
        lineEdit_Temp->setFont(font2);
        lineEdit_Temp->setStyleSheet(QLatin1String("QLineEdit {\n"
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

        horizontalLayout_12->addWidget(lineEdit_Temp);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_7);


        verticalLayout_2->addLayout(horizontalLayout_12);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_25 = new QLabel(groupBox);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setStyleSheet(QLatin1String("font: 13pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 249, 237, 0);"));

        horizontalLayout_14->addWidget(label_25);

        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setFont(font1);

        horizontalLayout_14->addWidget(label_13);

        lineEdit_Location = new QLineEdit(groupBox);
        lineEdit_Location->setObjectName(QStringLiteral("lineEdit_Location"));
        lineEdit_Location->setFont(font2);
        lineEdit_Location->setStyleSheet(QLatin1String("QLineEdit {\n"
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

        horizontalLayout_14->addWidget(lineEdit_Location);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_8);


        verticalLayout_2->addLayout(horizontalLayout_14);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_18 = new QLabel(groupBox);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setStyleSheet(QStringLiteral("color: rgb(255, 249, 237, 0);"));

        horizontalLayout->addWidget(label_18);

        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font1);

        horizontalLayout->addWidget(label_12);

        lineEdit_Date = new QLineEdit(groupBox);
        lineEdit_Date->setObjectName(QStringLiteral("lineEdit_Date"));
        lineEdit_Date->setFont(font2);
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

        horizontalLayout->addWidget(lineEdit_Date);

        pushButton_calender = new QPushButton(groupBox);
        pushButton_calender->setObjectName(QStringLiteral("pushButton_calender"));
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
        QIcon icon;
        icon.addFile(QStringLiteral(":/Images/date.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_calender->setIcon(icon);
        pushButton_calender->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(pushButton_calender);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_16);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setFont(font1);

        horizontalLayout_15->addWidget(label_14);

        lineEdit_invo_num = new QLineEdit(groupBox);
        lineEdit_invo_num->setObjectName(QStringLiteral("lineEdit_invo_num"));
        lineEdit_invo_num->setFont(font2);
        lineEdit_invo_num->setStyleSheet(QLatin1String("QLineEdit {\n"
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

        horizontalLayout_15->addWidget(lineEdit_invo_num);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_17);


        verticalLayout_2->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        label_24 = new QLabel(groupBox);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setStyleSheet(QLatin1String("color: rgb(255, 249, 237, 0);\n"
"font: 13pt \"MS Shell Dlg 2\";"));

        horizontalLayout_16->addWidget(label_24);

        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setFont(font1);

        horizontalLayout_16->addWidget(label_16);

        lineEdit_Proj = new QLineEdit(groupBox);
        lineEdit_Proj->setObjectName(QStringLiteral("lineEdit_Proj"));
        lineEdit_Proj->setFont(font2);
        lineEdit_Proj->setStyleSheet(QLatin1String("QLineEdit {\n"
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

        horizontalLayout_16->addWidget(lineEdit_Proj);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_10);


        verticalLayout_2->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_14);

        pushButton_addnew_proj = new QPushButton(groupBox);
        pushButton_addnew_proj->setObjectName(QStringLiteral("pushButton_addnew_proj"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_addnew_proj->sizePolicy().hasHeightForWidth());
        pushButton_addnew_proj->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setFamily(QStringLiteral("Times New Roman"));
        font3.setPointSize(13);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(50);
        pushButton_addnew_proj->setFont(font3);
        pushButton_addnew_proj->setStyleSheet(QLatin1String("\n"
"QPushButton{\n"
"\n"
"	\n"
"\n"
"	font: 13pt \"Times New Roman\";  \n"
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

        horizontalLayout_17->addWidget(pushButton_addnew_proj);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_18);


        verticalLayout_2->addLayout(horizontalLayout_17);


        horizontalLayout_19->addLayout(verticalLayout_2);


        gridLayout->addLayout(horizontalLayout_19, 0, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox);


        verticalLayout_4->addLayout(verticalLayout_3);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_20);

        label_17 = new QLabel(addNewPart);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setStyleSheet(QStringLiteral("color: rgb(255, 249, 237, 0);"));

        horizontalLayout_13->addWidget(label_17);

        pushButton_add = new QPushButton(addNewPart);
        pushButton_add->setObjectName(QStringLiteral("pushButton_add"));
        QFont font4;
        font4.setFamily(QStringLiteral("Times New Roman"));
        font4.setPointSize(18);
        font4.setBold(false);
        font4.setItalic(false);
        font4.setWeight(50);
        pushButton_add->setFont(font4);
        pushButton_add->setStyleSheet(QLatin1String("\n"
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

        horizontalLayout_13->addWidget(pushButton_add);

        pushButton_exit = new QPushButton(addNewPart);
        pushButton_exit->setObjectName(QStringLiteral("pushButton_exit"));
        pushButton_exit->setFont(font4);
        pushButton_exit->setStyleSheet(QLatin1String("\n"
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

        horizontalLayout_13->addWidget(pushButton_exit);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_15);

        pushButton_clear = new QPushButton(addNewPart);
        pushButton_clear->setObjectName(QStringLiteral("pushButton_clear"));
        pushButton_clear->setStyleSheet(QStringLiteral(""));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Images/clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_clear->setIcon(icon1);
        pushButton_clear->setIconSize(QSize(55, 55));

        horizontalLayout_13->addWidget(pushButton_clear);

        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_19);


        verticalLayout_4->addLayout(horizontalLayout_13);


        gridLayout_2->addLayout(verticalLayout_4, 0, 0, 1, 1);

        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        label_8->raise();
        label_9->raise();
        label_10->raise();
        label_11->raise();
        label_13->raise();
        label_14->raise();
        label_15->raise();
        lineEdit_Part_No->raise();
        lineEdit_Part_Name->raise();
        lineEdit_Descrp->raise();
        lineEdit_avl_qty->raise();
        lineEdit_min_qty->raise();
        lineEdit_val->raise();
        lineEdit_Manf->raise();
        lineEdit_footp->raise();
        lineEdit_Temp->raise();
        lineEdit_Location->raise();
        lineEdit_invo_num->raise();
        lineEdit_Remark->raise();
        pushButton_clear->raise();
        pushButton_add->raise();
        pushButton_exit->raise();
        label_16->raise();
        lineEdit_Proj->raise();
        pushButton_addnew_proj->raise();
        pushButton_calender->raise();
        comboBox_grade->raise();
        groupBox->raise();
        label_17->raise();
        label_17->raise();

        retranslateUi(addNewPart);

        QMetaObject::connectSlotsByName(addNewPart);
    } // setupUi

    void retranslateUi(QDialog *addNewPart)
    {
        addNewPart->setWindowTitle(QApplication::translate("addNewPart", "Add New Part", 0));
        label->setText(QApplication::translate("addNewPart", "Add New Part", 0));
        groupBox->setTitle(QString());
        label_2->setText(QApplication::translate("addNewPart", "PART NO", 0));
        label_3->setText(QApplication::translate("addNewPart", "PART NAME", 0));
        label_22->setText(QApplication::translate("addNewPart", "TextLabel", 0));
        label_4->setText(QApplication::translate("addNewPart", "PART DESCRIPTION", 0));
        label_5->setText(QApplication::translate("addNewPart", "AVAIL. QTY", 0));
        label_6->setText(QApplication::translate("addNewPart", "MIN . QTY", 0));
        label_7->setText(QApplication::translate("addNewPart", "      VALUE", 0));
        label_15->setText(QApplication::translate("addNewPart", "REMARK", 0));
        label_8->setText(QApplication::translate("addNewPart", "                       GRADE", 0));
        label_19->setText(QApplication::translate("addNewPart", "TextLabel", 0));
        label_9->setText(QApplication::translate("addNewPart", "MANUFACTURER", 0));
        label_21->setText(QApplication::translate("addNewPart", "TextlSDFD", 0));
        label_10->setText(QApplication::translate("addNewPart", "FOOTPRINT", 0));
        label_20->setText(QApplication::translate("addNewPart", "TeBAELE", 0));
        label_11->setText(QApplication::translate("addNewPart", "TEMP RANGE", 0));
        label_25->setText(QApplication::translate("addNewPart", "TextLabel", 0));
        label_13->setText(QApplication::translate("addNewPart", "LOCATION", 0));
        label_18->setText(QApplication::translate("addNewPart", "TextLa", 0));
        label_12->setText(QApplication::translate("addNewPart", "INVOICE DATE", 0));
        pushButton_calender->setText(QString());
        label_14->setText(QApplication::translate("addNewPart", "INVOICE NUMBER", 0));
        label_24->setText(QApplication::translate("addNewPart", "TextLabel", 0));
        label_16->setText(QApplication::translate("addNewPart", "  PROJECT", 0));
        pushButton_addnew_proj->setText(QApplication::translate("addNewPart", "Add New Project", 0));
        label_17->setText(QApplication::translate("addNewPart", "TextLabel", 0));
        pushButton_add->setText(QApplication::translate("addNewPart", "ADD", 0));
        pushButton_exit->setText(QApplication::translate("addNewPart", "CANCEL", 0));
        pushButton_clear->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class addNewPart: public Ui_addNewPart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNEWPART_H
