/********************************************************************************
** Form generated from reading UI file 'partstracker.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARTSTRACKER_H
#define UI_PARTSTRACKER_H

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

class Ui_partsTracker
{
public:
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_search;
    QLineEdit *lineEdit;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_refresh;
    QTableView *tableView;

    void setupUi(QDialog *partsTracker)
    {
        if (partsTracker->objectName().isEmpty())
            partsTracker->setObjectName(QStringLiteral("partsTracker"));
        partsTracker->resize(1052, 584);
        horizontalLayout_3 = new QHBoxLayout(partsTracker);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_search = new QPushButton(partsTracker);
        pushButton_search->setObjectName(QStringLiteral("pushButton_search"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_search->sizePolicy().hasHeightForWidth());
        pushButton_search->setSizePolicy(sizePolicy);
        pushButton_search->setStyleSheet(QStringLiteral(""));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Images/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_search->setIcon(icon);
        pushButton_search->setIconSize(QSize(50, 50));

        horizontalLayout->addWidget(pushButton_search);

        lineEdit = new QLineEdit(partsTracker);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
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

        horizontalLayout->addWidget(lineEdit);

        comboBox = new QComboBox(partsTracker);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        sizePolicy.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        comboBox->setFont(font1);

        horizontalLayout->addWidget(comboBox);


        horizontalLayout_2->addLayout(horizontalLayout);

        horizontalSpacer = new QSpacerItem(478, 58, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton_refresh = new QPushButton(partsTracker);
        pushButton_refresh->setObjectName(QStringLiteral("pushButton_refresh"));
        pushButton_refresh->setStyleSheet(QStringLiteral("background-color:transparent;"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Images/refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_refresh->setIcon(icon1);
        pushButton_refresh->setIconSize(QSize(45, 45));

        horizontalLayout_2->addWidget(pushButton_refresh);


        verticalLayout->addLayout(horizontalLayout_2);

        tableView = new QTableView(partsTracker);
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


        horizontalLayout_3->addLayout(verticalLayout);


        retranslateUi(partsTracker);

        QMetaObject::connectSlotsByName(partsTracker);
    } // setupUi

    void retranslateUi(QDialog *partsTracker)
    {
        partsTracker->setWindowTitle(QApplication::translate("partsTracker", "Parts Tracker", 0));
        pushButton_search->setText(QString());
        pushButton_refresh->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class partsTracker: public Ui_partsTracker {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARTSTRACKER_H
