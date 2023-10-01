/********************************************************************************
** Form generated from reading UI file 'viewproject.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWPROJECT_H
#define UI_VIEWPROJECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ViewProject
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QTableView *tableView;
    QSpacerItem *horizontalSpacer_2;
    QTableView *tableView_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_cancel;

    void setupUi(QDialog *ViewProject)
    {
        if (ViewProject->objectName().isEmpty())
            ViewProject->setObjectName(QStringLiteral("ViewProject"));
        ViewProject->resize(1476, 758);
        verticalLayout = new QVBoxLayout(ViewProject);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        tableView = new QTableView(ViewProject);
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

        horizontalLayout_3->addWidget(tableView);

        horizontalSpacer_2 = new QSpacerItem(58, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        tableView_2 = new QTableView(ViewProject);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setStyleSheet(QLatin1String("QTableView {\n"
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
"\n"
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
"    b"
                        "order-right: none;\n"
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

        horizontalLayout_3->addWidget(tableView_2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_3 = new QPushButton(ViewProject);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setStyleSheet(QStringLiteral(""));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Images/refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon);
        pushButton_3->setIconSize(QSize(45, 45));

        horizontalLayout_2->addWidget(pushButton_3);

        horizontalSpacer = new QSpacerItem(718, 48, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(ViewProject);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        font.setPointSize(14);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        pushButton->setFont(font);
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

        horizontalLayout->addWidget(pushButton);

        pushButton_cancel = new QPushButton(ViewProject);
        pushButton_cancel->setObjectName(QStringLiteral("pushButton_cancel"));
        sizePolicy.setHeightForWidth(pushButton_cancel->sizePolicy().hasHeightForWidth());
        pushButton_cancel->setSizePolicy(sizePolicy);
        pushButton_cancel->setFont(font);
        pushButton_cancel->setStyleSheet(QLatin1String("\n"
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

        horizontalLayout->addWidget(pushButton_cancel);


        horizontalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(ViewProject);

        QMetaObject::connectSlotsByName(ViewProject);
    } // setupUi

    void retranslateUi(QDialog *ViewProject)
    {
        ViewProject->setWindowTitle(QApplication::translate("ViewProject", "View Project", 0));
        pushButton_3->setText(QString());
        pushButton->setText(QApplication::translate("ViewProject", "OK", 0));
        pushButton_cancel->setText(QApplication::translate("ViewProject", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ViewProject: public Ui_ViewProject {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWPROJECT_H
