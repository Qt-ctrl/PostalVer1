#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlQueryModel>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_searchButton_clicked();

    void on_userInput_returnPressed();

    void on_pushBaden_clicked();

    void on_pushBayern_clicked();

    void on_pushBerlin_clicked();

    void on_pushBrandenburg_clicked();

    void on_pushBremen_clicked();

    void on_pushHamburg_clicked();

    void on_pushHessen_clicked();

    void on_pushMecklenburg_clicked();

    void on_pushNiedersachsen_clicked();

    void on_pushNrw_clicked();

    void on_pushRheinland_clicked();

    void on_pushSaarland_clicked();

    void on_pushSachsen_clicked();

    void on_pushSachsenAnh_clicked();

    void on_pushSchleswig_clicked();

    void on_pushThuringen_clicked();

private:
    Ui::MainWindow *ui;
    QSqlDatabase db1;
    QSqlQueryModel *querymodel;
    int postalCode;
    QString land;

    bool validateInput();
    QSqlQuery createQuery();
    void setCredentials();

};

#endif // MAINWINDOW_H
