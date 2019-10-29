#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QtXml>
#include <QFile>
#include <QLineEdit>
#include <QIODevice>
#include <QTextStream>
#include <QMessageBox>
#include <QtGui>
#include <QtCore>
#include "main.cpp"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;

    ui->lineEdit->setPlaceholderText("Wpisz kod");
}

void MainWindow::on_lineEdit_returnPressed()
{


    QString postalcode = ui->lineEdit->text();
    int postal = postalcode.toInt();



    //DOM read and parse
    QDomDocument kody;
    //load

        QFile db("C:\\Postal\\postal_codes.xml");
        if (!db.open(QIODevice::ReadOnly))
        {
        QMessageBox::critical(0,"info",db.errorString());
        db.close();
        }

        if ((postal<1000||postal>100000)&&showresult==0)
            {
            QMessageBox::critical(this,"Błąd","Pomyłka, wprowadź poprawny");
                       //critical
                       //question
                       //warning
             }else

                   // while (postal!=1)
                    //{

                    //Get root
                    {
                    QDomElement root = kody.firstChildElement();


                    QTextStream in(&db);
                    ui->textBrowser->setText(in.readAll());
                    }
                    //}
}//onreturn_pressed

void MainWindow::on_pushButton_clicked()
{
    ui->lineEdit->clear();
    postal = 00000;
    showresult=0;
    ui->textBrowser->clear();

}
