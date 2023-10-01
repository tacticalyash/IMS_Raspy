/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionView_Invoices;
    QAction *actionView_Parts_Tracker;
    QAction *actionView_Parts_Quantity;
    QAction *actionView_Project;
    QAction *actionManage_Project;
    QAction *actionView_Recipients;
    QAction *actionManage_recipients;
    QAction *actionChange_Login_Credentials;
    QAction *actionUpdate_Database;
    QAction *actionAdd_Users;
    QAction *actionSettings;
    QAction *actionCloud_Backup;
    QAction *actionInward_Store_Note;
    QAction *actionMaterial_Requisition_Slips;
    QAction *actionCloud_Backup_2;
    QAction *actionGenerate_ISN;
    QAction *actionView_ISN;
    QAction *actionGenerate_MRS;
    QAction *actionView_MRS;
    QAction *actionNew_Part;
    QAction *actionDelete_Part;
    QAction *actionDelete_Part_2;
    QAction *actionAdd_Part_QTY;
    QAction *actionBackup_Database;
    QAction *actionOpenSSL_Version;
    QAction *actionAdd_New_User;
    QAction *actionEdit_User;
    QAction *actionDelete_User;
    QAction *actionEdit_Part;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *LogOut_button;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *authLogin_button;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_3;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_editPart;
    QPushButton *pushButton_del_partt;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *pushButton_refresh;
    QPushButton *pushButton_search;
    QLineEdit *lineEdit;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuView;
    QMenu *menuProjects;
    QMenu *menuRecipients;
    QMenu *menuUser;
    QMenu *menuSlips;
    QMenu *menuInward_Store_Note;
    QMenu *menuMaterial_Requistion_Slips;
    QMenu *menuParts;
    QMenu *menuHelp;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1580, 780);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionView_Invoices = new QAction(MainWindow);
        actionView_Invoices->setObjectName(QStringLiteral("actionView_Invoices"));
        actionView_Parts_Tracker = new QAction(MainWindow);
        actionView_Parts_Tracker->setObjectName(QStringLiteral("actionView_Parts_Tracker"));
        actionView_Parts_Quantity = new QAction(MainWindow);
        actionView_Parts_Quantity->setObjectName(QStringLiteral("actionView_Parts_Quantity"));
        actionView_Project = new QAction(MainWindow);
        actionView_Project->setObjectName(QStringLiteral("actionView_Project"));
        actionManage_Project = new QAction(MainWindow);
        actionManage_Project->setObjectName(QStringLiteral("actionManage_Project"));
        actionView_Recipients = new QAction(MainWindow);
        actionView_Recipients->setObjectName(QStringLiteral("actionView_Recipients"));
        actionManage_recipients = new QAction(MainWindow);
        actionManage_recipients->setObjectName(QStringLiteral("actionManage_recipients"));
        actionChange_Login_Credentials = new QAction(MainWindow);
        actionChange_Login_Credentials->setObjectName(QStringLiteral("actionChange_Login_Credentials"));
        actionUpdate_Database = new QAction(MainWindow);
        actionUpdate_Database->setObjectName(QStringLiteral("actionUpdate_Database"));
        actionAdd_Users = new QAction(MainWindow);
        actionAdd_Users->setObjectName(QStringLiteral("actionAdd_Users"));
        actionSettings = new QAction(MainWindow);
        actionSettings->setObjectName(QStringLiteral("actionSettings"));
        actionCloud_Backup = new QAction(MainWindow);
        actionCloud_Backup->setObjectName(QStringLiteral("actionCloud_Backup"));
        actionInward_Store_Note = new QAction(MainWindow);
        actionInward_Store_Note->setObjectName(QStringLiteral("actionInward_Store_Note"));
        actionMaterial_Requisition_Slips = new QAction(MainWindow);
        actionMaterial_Requisition_Slips->setObjectName(QStringLiteral("actionMaterial_Requisition_Slips"));
        actionCloud_Backup_2 = new QAction(MainWindow);
        actionCloud_Backup_2->setObjectName(QStringLiteral("actionCloud_Backup_2"));
        actionGenerate_ISN = new QAction(MainWindow);
        actionGenerate_ISN->setObjectName(QStringLiteral("actionGenerate_ISN"));
        actionView_ISN = new QAction(MainWindow);
        actionView_ISN->setObjectName(QStringLiteral("actionView_ISN"));
        actionGenerate_MRS = new QAction(MainWindow);
        actionGenerate_MRS->setObjectName(QStringLiteral("actionGenerate_MRS"));
        actionView_MRS = new QAction(MainWindow);
        actionView_MRS->setObjectName(QStringLiteral("actionView_MRS"));
        actionNew_Part = new QAction(MainWindow);
        actionNew_Part->setObjectName(QStringLiteral("actionNew_Part"));
        actionDelete_Part = new QAction(MainWindow);
        actionDelete_Part->setObjectName(QStringLiteral("actionDelete_Part"));
        actionDelete_Part_2 = new QAction(MainWindow);
        actionDelete_Part_2->setObjectName(QStringLiteral("actionDelete_Part_2"));
        actionAdd_Part_QTY = new QAction(MainWindow);
        actionAdd_Part_QTY->setObjectName(QStringLiteral("actionAdd_Part_QTY"));
        actionBackup_Database = new QAction(MainWindow);
        actionBackup_Database->setObjectName(QStringLiteral("actionBackup_Database"));
        actionOpenSSL_Version = new QAction(MainWindow);
        actionOpenSSL_Version->setObjectName(QStringLiteral("actionOpenSSL_Version"));
        actionAdd_New_User = new QAction(MainWindow);
        actionAdd_New_User->setObjectName(QStringLiteral("actionAdd_New_User"));
        actionEdit_User = new QAction(MainWindow);
        actionEdit_User->setObjectName(QStringLiteral("actionEdit_User"));
        actionDelete_User = new QAction(MainWindow);
        actionDelete_User->setObjectName(QStringLiteral("actionDelete_User"));
        actionEdit_Part = new QAction(MainWindow);
        actionEdit_Part->setObjectName(QStringLiteral("actionEdit_Part"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        LogOut_button = new QPushButton(frame);
        LogOut_button->setObjectName(QStringLiteral("LogOut_button"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LogOut_button->sizePolicy().hasHeightForWidth());
        LogOut_button->setSizePolicy(sizePolicy);
        LogOut_button->setStyleSheet(QLatin1String("\n"
"QPushButton{\n"
"\n"
"	\n"
"\n"
"	font: 22pt \"Times New Roman\";  \n"
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
"\n"
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
        icon.addFile(QStringLiteral(":/Images/may.ico"), QSize(), QIcon::Normal, QIcon::Off);
        LogOut_button->setIcon(icon);
        LogOut_button->setIconSize(QSize(100, 100));

        horizontalLayout_2->addWidget(LogOut_button);

        horizontalSpacer = new QSpacerItem(323, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        font.setPointSize(19);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("color : red;"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font1;
        font1.setFamily(QStringLiteral("Times New Roman"));
        font1.setPointSize(24);
        font1.setBold(true);
        font1.setWeight(75);
        label_3->setFont(font1);
        label_3->setStyleSheet(QStringLiteral("color :  blue;"));

        verticalLayout->addWidget(label_3);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(322, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        authLogin_button = new QPushButton(frame);
        authLogin_button->setObjectName(QStringLiteral("authLogin_button"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(authLogin_button->sizePolicy().hasHeightForWidth());
        authLogin_button->setSizePolicy(sizePolicy1);
        authLogin_button->setStyleSheet(QLatin1String("\n"
"QPushButton{\n"
"\n"
"	\n"
"\n"
"	font: 22pt \"Times New Roman\";  \n"
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
        icon1.addFile(QStringLiteral(":/Images/login.png"), QSize(), QIcon::Normal, QIcon::On);
        authLogin_button->setIcon(icon1);
        authLogin_button->setIconSize(QSize(90, 90));

        horizontalLayout_2->addWidget(authLogin_button);


        verticalLayout_2->addWidget(frame);

        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy2);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        horizontalLayout_3 = new QHBoxLayout(page);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(page);
        label->setObjectName(QStringLiteral("label"));
        QFont font2;
        font2.setPointSize(26);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        verticalLayout_3 = new QVBoxLayout(page_2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        tableView = new QTableView(page_2);
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

        verticalLayout_3->addWidget(tableView);

        stackedWidget->addWidget(page_2);

        verticalLayout_2->addWidget(stackedWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_editPart = new QPushButton(centralWidget);
        pushButton_editPart->setObjectName(QStringLiteral("pushButton_editPart"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButton_editPart->sizePolicy().hasHeightForWidth());
        pushButton_editPart->setSizePolicy(sizePolicy3);
        QFont font3;
        font3.setFamily(QStringLiteral("Times New Roman"));
        font3.setPointSize(18);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(50);
        pushButton_editPart->setFont(font3);
        pushButton_editPart->setStyleSheet(QLatin1String("\n"
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

        horizontalLayout->addWidget(pushButton_editPart);

        pushButton_del_partt = new QPushButton(centralWidget);
        pushButton_del_partt->setObjectName(QStringLiteral("pushButton_del_partt"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(pushButton_del_partt->sizePolicy().hasHeightForWidth());
        pushButton_del_partt->setSizePolicy(sizePolicy4);
        pushButton_del_partt->setStyleSheet(QLatin1String("\n"
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

        horizontalLayout->addWidget(pushButton_del_partt);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy5);
        QFont font4;
        font4.setPointSize(16);
        font4.setBold(true);
        font4.setWeight(75);
        label_5->setFont(font4);

        horizontalLayout->addWidget(label_5);

        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy5.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy5);
        label_6->setFont(font4);

        horizontalLayout->addWidget(label_6);

        pushButton_refresh = new QPushButton(centralWidget);
        pushButton_refresh->setObjectName(QStringLiteral("pushButton_refresh"));
        sizePolicy.setHeightForWidth(pushButton_refresh->sizePolicy().hasHeightForWidth());
        pushButton_refresh->setSizePolicy(sizePolicy);
        pushButton_refresh->setStyleSheet(QLatin1String("\n"
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
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Images/refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_refresh->setIcon(icon2);
        pushButton_refresh->setIconSize(QSize(40, 40));

        horizontalLayout->addWidget(pushButton_refresh);

        pushButton_search = new QPushButton(centralWidget);
        pushButton_search->setObjectName(QStringLiteral("pushButton_search"));
        pushButton_search->setStyleSheet(QStringLiteral(""));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Images/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_search->setIcon(icon3);
        pushButton_search->setIconSize(QSize(45, 45));

        horizontalLayout->addWidget(pushButton_search);

        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QSizePolicy sizePolicy6(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy6);
        QFont font5;
        font5.setPointSize(16);
        lineEdit->setFont(font5);
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

        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        sizePolicy6.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy6);
        comboBox->setFont(font4);

        horizontalLayout->addWidget(comboBox);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy4.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy4);
        pushButton->setFont(font3);
        pushButton->setStyleSheet(QLatin1String("\n"
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

        horizontalLayout->addWidget(pushButton);


        verticalLayout_2->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1580, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QStringLiteral("menuView"));
        menuProjects = new QMenu(menuBar);
        menuProjects->setObjectName(QStringLiteral("menuProjects"));
        menuRecipients = new QMenu(menuBar);
        menuRecipients->setObjectName(QStringLiteral("menuRecipients"));
        menuUser = new QMenu(menuBar);
        menuUser->setObjectName(QStringLiteral("menuUser"));
        menuSlips = new QMenu(menuBar);
        menuSlips->setObjectName(QStringLiteral("menuSlips"));
        menuInward_Store_Note = new QMenu(menuSlips);
        menuInward_Store_Note->setObjectName(QStringLiteral("menuInward_Store_Note"));
        menuMaterial_Requistion_Slips = new QMenu(menuSlips);
        menuMaterial_Requistion_Slips->setObjectName(QStringLiteral("menuMaterial_Requistion_Slips"));
        menuParts = new QMenu(menuBar);
        menuParts->setObjectName(QStringLiteral("menuParts"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuProjects->menuAction());
        menuBar->addAction(menuRecipients->menuAction());
        menuBar->addAction(menuUser->menuAction());
        menuBar->addAction(menuSlips->menuAction());
        menuBar->addAction(menuParts->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionExit);
        menuView->addAction(actionView_Invoices);
        menuView->addAction(actionView_Parts_Tracker);
        menuView->addAction(actionView_Parts_Quantity);
        menuProjects->addAction(actionView_Project);
        menuProjects->addAction(actionManage_Project);
        menuRecipients->addAction(actionView_Recipients);
        menuRecipients->addAction(actionManage_recipients);
        menuUser->addAction(actionChange_Login_Credentials);
        menuUser->addSeparator();
        menuSlips->addAction(menuInward_Store_Note->menuAction());
        menuSlips->addAction(menuMaterial_Requistion_Slips->menuAction());
        menuInward_Store_Note->addAction(actionGenerate_ISN);
        menuInward_Store_Note->addAction(actionView_ISN);
        menuMaterial_Requistion_Slips->addAction(actionGenerate_MRS);
        menuMaterial_Requistion_Slips->addAction(actionView_MRS);
        menuParts->addAction(actionNew_Part);
        menuParts->addAction(actionAdd_Part_QTY);
        menuHelp->addAction(actionBackup_Database);
        menuHelp->addSeparator();
        menuHelp->addAction(actionOpenSSL_Version);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "IMS", 0));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0));
        actionView_Invoices->setText(QApplication::translate("MainWindow", "View Invoices", 0));
        actionView_Parts_Tracker->setText(QApplication::translate("MainWindow", "View Parts Tracker", 0));
        actionView_Parts_Quantity->setText(QApplication::translate("MainWindow", "View Parts Quantity", 0));
        actionView_Project->setText(QApplication::translate("MainWindow", "View Project", 0));
        actionManage_Project->setText(QApplication::translate("MainWindow", "Manage Project", 0));
        actionView_Recipients->setText(QApplication::translate("MainWindow", "View Recipients", 0));
        actionManage_recipients->setText(QApplication::translate("MainWindow", "Manage recipients", 0));
        actionChange_Login_Credentials->setText(QApplication::translate("MainWindow", "Change Login Credentials", 0));
        actionUpdate_Database->setText(QApplication::translate("MainWindow", "Update Database", 0));
        actionAdd_Users->setText(QApplication::translate("MainWindow", "Add Users", 0));
        actionSettings->setText(QApplication::translate("MainWindow", "Settings", 0));
        actionCloud_Backup->setText(QApplication::translate("MainWindow", "Cloud Backup", 0));
        actionInward_Store_Note->setText(QApplication::translate("MainWindow", "Inward Store Note", 0));
        actionMaterial_Requisition_Slips->setText(QApplication::translate("MainWindow", "Material Requistion Slips", 0));
        actionCloud_Backup_2->setText(QApplication::translate("MainWindow", "Cloud Backup", 0));
        actionGenerate_ISN->setText(QApplication::translate("MainWindow", "Generate ISN", 0));
        actionView_ISN->setText(QApplication::translate("MainWindow", "View ISN", 0));
        actionGenerate_MRS->setText(QApplication::translate("MainWindow", "Generate MRS", 0));
        actionView_MRS->setText(QApplication::translate("MainWindow", "View MRS", 0));
        actionNew_Part->setText(QApplication::translate("MainWindow", "New Part", 0));
        actionDelete_Part->setText(QApplication::translate("MainWindow", "Edit Part", 0));
        actionDelete_Part_2->setText(QApplication::translate("MainWindow", "Delete Part", 0));
        actionAdd_Part_QTY->setText(QApplication::translate("MainWindow", "Add Part QTY", 0));
        actionBackup_Database->setText(QApplication::translate("MainWindow", "Backup Database", 0));
        actionOpenSSL_Version->setText(QApplication::translate("MainWindow", "OpenSSL Version", 0));
        actionAdd_New_User->setText(QApplication::translate("MainWindow", "Add New User", 0));
        actionEdit_User->setText(QApplication::translate("MainWindow", "Edit User", 0));
        actionDelete_User->setText(QApplication::translate("MainWindow", "Delete User", 0));
        actionEdit_Part->setText(QApplication::translate("MainWindow", "Edit_Part", 0));
        LogOut_button->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "                         MAYTECH SYSTEMS", 0));
        label_3->setText(QApplication::translate("MainWindow", "INVENTORY MANAGEMENT SYSTEM", 0));
        authLogin_button->setText(QString());
        label->setText(QApplication::translate("MainWindow", "DATA HIDDEN", 0));
        pushButton_editPart->setText(QApplication::translate("MainWindow", "EDIT", 0));
        pushButton_del_partt->setText(QApplication::translate("MainWindow", "DELETE", 0));
        label_5->setText(QApplication::translate("MainWindow", "USER NAME : ", 0));
        label_6->setText(QApplication::translate("MainWindow", " USER TYPE : ", 0));
        pushButton_refresh->setText(QString());
        pushButton_search->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "EXPORT", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuView->setTitle(QApplication::translate("MainWindow", "View", 0));
        menuProjects->setTitle(QApplication::translate("MainWindow", "Projects", 0));
        menuRecipients->setTitle(QApplication::translate("MainWindow", "Recipients", 0));
        menuUser->setTitle(QApplication::translate("MainWindow", "User", 0));
        menuSlips->setTitle(QApplication::translate("MainWindow", "Slips", 0));
        menuInward_Store_Note->setTitle(QApplication::translate("MainWindow", "Inward Store Note", 0));
        menuMaterial_Requistion_Slips->setTitle(QApplication::translate("MainWindow", "Material Requistion Slips", 0));
        menuParts->setTitle(QApplication::translate("MainWindow", "Parts", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
