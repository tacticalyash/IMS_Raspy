#include "mainwindow.h"
#include <QApplication>
#include <QIcon>
#include <QSplashScreen>
#include <QTimer>
#include <QElapsedTimer>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QMessageBox>
#include <QPdfWriter>
#include <QPainter>
#include <QPdfWriter>
#include <QFile>
#include <QFileDialog>
#include <QVariant>
#include <QStandardItem>
#include <QItemEditorCreatorBase>
#include<QItemSelectionModel>
#include <QInputDialog>
#include <QCompleter>
#include <QFormLayout>
#include <QDialogButtonBox>
#include <QApplication>
#include <QTableView>
#include <QMenu>
#include <QAction>
#include <QClipboard>
#include <QModelIndex>
#include <QHBoxLayout>
#include <QTableWidget>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QIcon icon(":/home/pi/inv_newer_12_07/rlsINV6_07/image-ui/Images/may.ico");
        a.setWindowIcon(icon);

    MainWindow w;
    w.setWindowTitle("IMS");
    w.setWindowIcon(QIcon("/home/pi/inv_newer_12_07/rlsINV6_07/image-ui/Images/may.ico"));
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("D:/database.sqlite");
     if (!db.open()) {
         qDebug() << "not openibng";

     }

//    QString styleSheet = "QMenuBar{background-color: #1E90FF; color: white;}";
//    w.menuBar()->setStyleSheet(styleSheet);

    QSplashScreen splash(QPixmap("/home/pi/inv_newer_12_07/rlsINV6_07/image-ui/Images/may.ico"));
    splash.show();


    QElapsedTimer timer;
    timer.start();
    while(timer.elapsed() < 1500)
    {
        a.processEvents();
    }
    splash.close();


    QWidget *mainWindow = new QWidget();
      QStackedWidget *stackedWidget = new QStackedWidget();
      QWidget *page1 = new QWidget();
      QWidget *page2 = new QWidget();
      QHBoxLayout *layout = new QHBoxLayout();


      QTableWidget *table1 = new QTableWidget();
      QTableWidget *table2 = new QTableWidget();
      QTableWidget *table3 = new QTableWidget();
      QTableWidget *table4 = new QTableWidget();


      table1->setColumnCount(3);
      table1->setRowCount(5);
      table2->setColumnCount(3);
      table2->setRowCount(5);
      table3->setColumnCount(3);
      table3->setRowCount(5);
      table4->setColumnCount(3);
      table4->setRowCount(5);


      QVBoxLayout *page2Layout = new QVBoxLayout();
      page2Layout->addWidget(table1);
      page2Layout->addWidget(table2);
      page2Layout->addWidget(table3);
      page2Layout->addWidget(table4);
      page2->setLayout(page2Layout);


      stackedWidget->addWidget(page1);
      stackedWidget->addWidget(page2);


      layout->addWidget(stackedWidget);
      mainWindow->setLayout(layout);



      w.show();


    return a.exec();
}
