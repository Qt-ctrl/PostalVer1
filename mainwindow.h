#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QCoreApplication>
#include <QtSql>
#include <QSqlError>
#include <QSqlDatabase>
#include <QTableView>
#include <QLabel>
#include <QString>
#include <QLineEdit>
#include <QMessageBox>
#include <QDebug>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    int showresult=0;
    QString path="http://localhost/Postal";


private slots:

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;

    QSqlDatabase dataset;
    QSqlQueryModel *querymodel;

};

#endif // MAINWINDOW_H
