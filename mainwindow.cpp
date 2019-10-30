#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setHostName("http://remotemysql.com");
    db.setUserName("5SkqI0QrcI");
    db.setPassword("NijuesaTzL");
    db.setDatabaseName("5SkqI0QrcI");

    if (db.open())
    {
        querymodel = new QSqlQueryModel();
        querymodel->setQuery("SELECT * FROM dataset1");
        ui->tableView->setModel(querymodel);
        qDebug() <<"done";
        db.close();
    }
    else
    {
        qDebug() <<"eror = " << db.lastError().text();
    }


}

void MainWindow::on_pushButton_clicked()
{

    //showresult=0;
    //ui->buildBrowser->clear();

}
