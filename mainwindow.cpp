#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QLineEdit>
#include <QMessageBox>
#include <QtGui>
#include <QtCore>
#include "main.cpp"
#include <QDebug>

void searching(const QDomNode &base)
{
    QDomNode domData = base.firstChild();
    while (!domData.isNull())
    {
        if (!domData.isElement())
        {
            QDomElement domRow = domData.toElement();
            if (domRow.isNull())
            {
                if (domRow.tagName() == "dataset")
                    qDebug () << "zipcode" << domRow.attribute("state", "");
                else
                    qDebug () << "/t" << domRow.tagName() << ": " << domRow.text();

            }

        }
        searching(domData);
        domData=domData.nextSibling();
    }
}

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


    if (postal<1000||postal>100000)
    {
        QMessageBox::critical(this,"Błąd","Pomyłka, wprowadź poprawny");
                   //critical
                   //question
                   //warning

    }else
    {


        void searching();
        //QMessageBox::information(this,"Wyszukano",postalcode);
               //critical
               //question
               //warning
    }

    }

