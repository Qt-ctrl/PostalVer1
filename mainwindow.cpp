#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QSqlQuery>
#include <QStandardItemModel>
#include <QUrl>
#include <QDesktopServices>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    querymodel = new QSqlQueryModel();
    ui->tableView->setModel(querymodel);
    ui->tableView->show();
    ui->label->show();

    setCredentials();
    //open db & check for errors

    if (!db1.open())
    {
        QMessageBox::critical(this,"Warning","Nie połączono z bazą danych");
        ui->label->hide();
    }
}

MainWindow::~MainWindow()
{
    db1.close();
    delete ui;
}

void MainWindow::on_searchButton_clicked()
{
    if(validateInput()) return;

    querymodel->setQuery(createQuery());
}

void MainWindow::on_userInput_returnPressed()
{
    on_searchButton_clicked();
}

void MainWindow::on_pushBaden_clicked()
{
    QString land = "https://www.ferienwiki.de/feiertage/de/baden-wuerttemberg";
    QDesktopServices::openUrl(land);
}

void MainWindow::on_pushBayern_clicked()
{
    QString land = "https://www.ferienwiki.de/feiertage/de/bayern";
    QDesktopServices::openUrl(land);
}

void MainWindow::on_pushBerlin_clicked()
{
    QString land = "https://www.ferienwiki.de/feiertage/de/berlin";
    QDesktopServices::openUrl(land);
}

void MainWindow::on_pushBrandenburg_clicked()
{
    QString land = "https://www.ferienwiki.de/feiertage/de/brandenburg";
    QDesktopServices::openUrl(land);
}


void MainWindow::on_pushBremen_clicked()
{
    QString land = "https://www.ferienwiki.de/feiertage/de/bremen";
    QDesktopServices::openUrl(land);
}

void MainWindow::on_pushHamburg_clicked()
{
    QString land = "https://www.ferienwiki.de/feiertage/de/hamburg";
    QDesktopServices::openUrl(land);
}

void MainWindow::on_pushHessen_clicked()
{
    QString land = "https://www.ferienwiki.de/feiertage/de/hessen";
    QDesktopServices::openUrl(land);
}

void MainWindow::on_pushMecklenburg_clicked()
{
    QString land = "https://www.ferienwiki.de/feiertage/de/mecklenburg-vorpommern";
    QDesktopServices::openUrl(land);
}

void MainWindow::on_pushNiedersachsen_clicked()
{
    QString land = "https://www.ferienwiki.de/feiertage/de/niedersachsen";
    QDesktopServices::openUrl(land);
}

void MainWindow::on_pushNrw_clicked()
{
    QString land = "https://www.ferienwiki.de/feiertage/de/nordrhein-westfalen";
    QDesktopServices::openUrl(land);
}

void MainWindow::on_pushRheinland_clicked()
{
    QString land = "https://www.ferienwiki.de/feiertage/de/rheinland-pfalz";
    QDesktopServices::openUrl(land);
}

void MainWindow::on_pushSaarland_clicked()
{
    QString land = "https://www.ferienwiki.de/feiertage/de/saarland";
    QDesktopServices::openUrl(land);
}

void MainWindow::on_pushSachsen_clicked()
{
    QString land = "https://www.ferienwiki.de/feiertage/de/sachsen";
    QDesktopServices::openUrl(land);
}


void MainWindow::on_pushSachsenAnh_clicked()
{
    QString land = "https://www.ferienwiki.de/feiertage/de/sachsen-anhalt";
    QDesktopServices::openUrl(land);
}

void MainWindow::on_pushSchleswig_clicked()
{
    QString land = "https://www.ferienwiki.de/feiertage/de/schleswig-holstein";
    QDesktopServices::openUrl(land);
}

void MainWindow::on_pushThuringen_clicked()
{
    QString land = "https://www.ferienwiki.de/feiertage/de/thueringen";
    QDesktopServices::openUrl(land);
}

bool MainWindow::validateInput()
{
    bool success;
    postalCode = ui->userInput->text().toInt(&success);

    if(!success || ui->userInput->text().size() > 99999 || ui->userInput->text().size() < 10000) return false;

    return success;
}

QSqlQuery MainWindow::createQuery()
{
    QSqlQuery query("SELECT zipcode as 'KOD', city as 'MIASTO', state as 'BUNDESLAND' FROM dataset1 WHERE zipcode='"
              +ui->userInput->text()+"' UNION ALL SELECT zipcode as 'KOD', city as 'MIASTO', state as 'BUNDESLAND' FROM dataset2 WHERE zipcode ='"
              +ui->userInput->text()+"'", db1);

    return query;
}

void MainWindow::setCredentials()
{
    db1 = QSqlDatabase::addDatabase("QMYSQL", "db1");
    db1.setHostName ("remotemysql.com");
    db1.setUserName("5SkqI0QrcI");
    db1.setPassword("NijuesaTzL");
    db1.setDatabaseName("5SkqI0QrcI");
}
