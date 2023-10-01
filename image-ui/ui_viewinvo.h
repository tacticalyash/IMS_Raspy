/********************************************************************************
** Form generated from reading UI file 'viewinvo.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWINVO_H
#define UI_VIEWINVO_H

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

class Ui_viewInvo
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_8;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_invo;
    QPushButton *pushButton_Manufacturer;
    QPushButton *pushButton_PartNo;
    QPushButton *pushButton_Date;
    QPushButton *pushButton_Comment;
    QPushButton *pushButton_QTY;
    QPushButton *pushButton_refresh;
    QSpacerItem *horizontalSpacer;
    QTableView *tableView;

    void setupUi(QDialog *viewInvo)
    {
        if (viewInvo->objectName().isEmpty())
            viewInvo->setObjectName(QStringLiteral("viewInvo"));
        viewInvo->resize(1382, 694);
        verticalLayout_2 = new QVBoxLayout(viewInvo);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton_8 = new QPushButton(viewInvo);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setStyleSheet(QStringLiteral(""));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Images/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_8->setIcon(icon);
        pushButton_8->setIconSize(QSize(55, 55));

        horizontalLayout_3->addWidget(pushButton_8);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lineEdit = new QLineEdit(viewInvo);
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
""));

        horizontalLayout_2->addWidget(lineEdit);

        comboBox = new QComboBox(viewInvo);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        sizePolicy.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        comboBox->setFont(font1);
        comboBox->setStyleSheet(QStringLiteral(""));

        horizontalLayout_2->addWidget(comboBox);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_invo = new QPushButton(viewInvo);
        pushButton_invo->setObjectName(QStringLiteral("pushButton_invo"));
        pushButton_invo->setStyleSheet(QLatin1String("\n"
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
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Images/invoice.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_invo->setIcon(icon1);
        pushButton_invo->setIconSize(QSize(50, 50));

        horizontalLayout->addWidget(pushButton_invo);

        pushButton_Manufacturer = new QPushButton(viewInvo);
        pushButton_Manufacturer->setObjectName(QStringLiteral("pushButton_Manufacturer"));
        pushButton_Manufacturer->setStyleSheet(QLatin1String("\n"
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
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Images/manufacturer.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Manufacturer->setIcon(icon2);
        pushButton_Manufacturer->setIconSize(QSize(50, 50));

        horizontalLayout->addWidget(pushButton_Manufacturer);

        pushButton_PartNo = new QPushButton(viewInvo);
        pushButton_PartNo->setObjectName(QStringLiteral("pushButton_PartNo"));
        pushButton_PartNo->setStyleSheet(QLatin1String("\n"
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
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Images/quantity.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_PartNo->setIcon(icon3);
        pushButton_PartNo->setIconSize(QSize(50, 50));

        horizontalLayout->addWidget(pushButton_PartNo);

        pushButton_Date = new QPushButton(viewInvo);
        pushButton_Date->setObjectName(QStringLiteral("pushButton_Date"));
        pushButton_Date->setStyleSheet(QLatin1String("\n"
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
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Images/date.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Date->setIcon(icon4);
        pushButton_Date->setIconSize(QSize(50, 50));

        horizontalLayout->addWidget(pushButton_Date);

        pushButton_Comment = new QPushButton(viewInvo);
        pushButton_Comment->setObjectName(QStringLiteral("pushButton_Comment"));
        sizePolicy.setHeightForWidth(pushButton_Comment->sizePolicy().hasHeightForWidth());
        pushButton_Comment->setSizePolicy(sizePolicy);
        pushButton_Comment->setStyleSheet(QLatin1String("\n"
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
        pushButton_Comment->setIconSize(QSize(50, 50));

        horizontalLayout->addWidget(pushButton_Comment);

        pushButton_QTY = new QPushButton(viewInvo);
        pushButton_QTY->setObjectName(QStringLiteral("pushButton_QTY"));
        sizePolicy.setHeightForWidth(pushButton_QTY->sizePolicy().hasHeightForWidth());
        pushButton_QTY->setSizePolicy(sizePolicy);
        pushButton_QTY->setStyleSheet(QLatin1String("\n"
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
"		background-color: purple;\n"
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
        pushButton_QTY->setIconSize(QSize(50, 50));

        horizontalLayout->addWidget(pushButton_QTY);

        pushButton_refresh = new QPushButton(viewInvo);
        pushButton_refresh->setObjectName(QStringLiteral("pushButton_refresh"));
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
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/Images/refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_refresh->setIcon(icon5);
        pushButton_refresh->setIconSize(QSize(50, 50));

        horizontalLayout->addWidget(pushButton_refresh);

        horizontalSpacer = new QSpacerItem(308, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        horizontalLayout_4->addLayout(horizontalLayout);


        verticalLayout->addLayout(horizontalLayout_4);

        tableView = new QTableView(viewInvo);
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
"   font-weight: bold;\n"
"   font-size: 18px;\n"
"    border: none;\n"
"    border-right: 1px solid #d9d9d9;\n"
"    border-bottom: 1px solid #d9d9d9;\n"
"    min-width: 80px;\n"
"    min-height: 30px;\n"
"    font-family: Times New Roman;\n"
"}\n"
"\n"
"\n"
"\n"
"QHeaderView::section:first {\n"
"    border-top-left-radius: 5px;\n"
"}\n"
"\n"
"QHeaderView::section:last {\n"
"    border-top-right-radius: 5px;\n"
"    border-right: none;\n"
"}\n"
"\n"
"QHeaderView::section:middle {\n"
"    border-right: none;\n"
"}\n"
"\n"
"QTableView::horizontalHeader {\n"
"    border-top: 1px sol"
                        "id #d9d9d9;\n"
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


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(viewInvo);

        QMetaObject::connectSlotsByName(viewInvo);
    } // setupUi

    void retranslateUi(QDialog *viewInvo)
    {
        viewInvo->setWindowTitle(QApplication::translate("viewInvo", "View Invoices", 0));
        pushButton_8->setText(QString());
        pushButton_invo->setText(QString());
        pushButton_Manufacturer->setText(QString());
        pushButton_PartNo->setText(QString());
        pushButton_Date->setText(QString());
        pushButton_Comment->setText(QApplication::translate("viewInvo", "DELETE", 0));
        pushButton_QTY->setText(QApplication::translate("viewInvo", "DELETE", 0));
        pushButton_refresh->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class viewInvo: public Ui_viewInvo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWINVO_H
