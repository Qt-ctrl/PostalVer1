#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
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

    QFile file("C:/Users/airma/OneDrive/Desktop/Programming/QT/PostalVer1/postal_codes.xml");
    if (!file.open(QIODevice::ReadOnly))
        QMessageBox::critical(0,"info",file.errorString());



    if ((postal<1000||postal>100000)&&showresult==0)
    {
        QMessageBox::critical(this,"Błąd","Pomyłka, wprowadź poprawny");
                   //critical
                   //question
                   //warning
    }else



        {
        QTextStream in(&file);
            ui->textBrowser->setText(in.readAll());
        }


    }

void MainWindow::on_pushButton_clicked()
{
    ui->lineEdit->clear();
    postal = 00000;
    showresult=0;
}
