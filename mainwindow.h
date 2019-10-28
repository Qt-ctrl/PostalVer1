#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QLineEdit>
#include <QMessageBox>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    int postal;
    QString postalcode = "00000";
private slots:
    void on_lineEdit_returnPressed();



private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
