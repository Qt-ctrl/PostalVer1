#include "mainwindow.h"
#include <QApplication>
#include <QtXml>
#include <QFile>
#include <QTextStream>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    //load xml
    QDomDocument doc;
    QFile list("postal_codes.xml");

    if (!list.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug() << "błąd przy otwieraniu";
        return -1;
    }else
    {
        if(doc.setContent(&list))
        {
            qDebug() << "błąd przy ladowaniu";
            return -1;
        }
    }



    return a.exec();
}
