/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTableView *tableView;
    QLabel *label;
    QSplitter *splitter;
    QLineEdit *userInput;
    QPushButton *searchButton;
    QPushButton *pushBaden;
    QPushButton *pushBayern;
    QPushButton *pushBerlin;
    QPushButton *pushBrandenburg;
    QPushButton *pushBremen;
    QPushButton *pushHamburg;
    QPushButton *pushHessen;
    QPushButton *pushMecklenburg;
    QPushButton *pushNiedersachsen;
    QPushButton *pushNrw;
    QPushButton *pushRheinland;
    QPushButton *pushSaarland;
    QPushButton *pushSachsen;
    QPushButton *pushSachsenAnh;
    QPushButton *pushSchleswig;
    QPushButton *pushThuringen;
    QLabel *label_2;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(600, 636);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 70, 580, 351));
        tableView->setStyleSheet(QString::fromUtf8(""));
        tableView->setFrameShape(QFrame::NoFrame);
        tableView->setFrameShadow(QFrame::Plain);
        tableView->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableView->setWordWrap(false);
        tableView->horizontalHeader()->setCascadingSectionResizes(true);
        tableView->horizontalHeader()->setStretchLastSection(true);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setEnabled(true);
        label->setGeometry(QRect(10, 40, 521, 20));
        label->setAlignment(Qt::AlignCenter);
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(10, 10, 401, 22));
        splitter->setOrientation(Qt::Horizontal);
        userInput = new QLineEdit(splitter);
        userInput->setObjectName(QString::fromUtf8("userInput"));
        userInput->setStyleSheet(QString::fromUtf8(""));
        userInput->setInputMethodHints(Qt::ImhDigitsOnly);
        userInput->setAlignment(Qt::AlignCenter);
        splitter->addWidget(userInput);
        searchButton = new QPushButton(splitter);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));
        searchButton->setCursor(QCursor(Qt::PointingHandCursor));
        searchButton->setMouseTracking(true);
        splitter->addWidget(searchButton);
        pushBaden = new QPushButton(centralWidget);
        pushBaden->setObjectName(QString::fromUtf8("pushBaden"));
        pushBaden->setGeometry(QRect(30, 460, 100, 25));
        pushBaden->setCursor(QCursor(Qt::PointingHandCursor));
        pushBaden->setMouseTracking(true);
#ifndef QT_NO_TOOLTIP
        pushBaden->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pushBaden->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
        pushBayern = new QPushButton(centralWidget);
        pushBayern->setObjectName(QString::fromUtf8("pushBayern"));
        pushBayern->setGeometry(QRect(30, 500, 100, 25));
        pushBayern->setCursor(QCursor(Qt::PointingHandCursor));
        pushBayern->setMouseTracking(true);
        pushBerlin = new QPushButton(centralWidget);
        pushBerlin->setObjectName(QString::fromUtf8("pushBerlin"));
        pushBerlin->setGeometry(QRect(30, 540, 100, 25));
        pushBerlin->setCursor(QCursor(Qt::PointingHandCursor));
        pushBerlin->setMouseTracking(true);
        pushBrandenburg = new QPushButton(centralWidget);
        pushBrandenburg->setObjectName(QString::fromUtf8("pushBrandenburg"));
        pushBrandenburg->setGeometry(QRect(30, 580, 100, 25));
        pushBrandenburg->setCursor(QCursor(Qt::PointingHandCursor));
        pushBrandenburg->setMouseTracking(true);
        pushBremen = new QPushButton(centralWidget);
        pushBremen->setObjectName(QString::fromUtf8("pushBremen"));
        pushBremen->setGeometry(QRect(170, 460, 100, 25));
        pushHamburg = new QPushButton(centralWidget);
        pushHamburg->setObjectName(QString::fromUtf8("pushHamburg"));
        pushHamburg->setGeometry(QRect(170, 500, 100, 25));
        pushHessen = new QPushButton(centralWidget);
        pushHessen->setObjectName(QString::fromUtf8("pushHessen"));
        pushHessen->setGeometry(QRect(170, 540, 100, 25));
        pushMecklenburg = new QPushButton(centralWidget);
        pushMecklenburg->setObjectName(QString::fromUtf8("pushMecklenburg"));
        pushMecklenburg->setGeometry(QRect(170, 580, 100, 25));
        pushNiedersachsen = new QPushButton(centralWidget);
        pushNiedersachsen->setObjectName(QString::fromUtf8("pushNiedersachsen"));
        pushNiedersachsen->setGeometry(QRect(330, 460, 100, 25));
        pushNrw = new QPushButton(centralWidget);
        pushNrw->setObjectName(QString::fromUtf8("pushNrw"));
        pushNrw->setGeometry(QRect(330, 500, 100, 25));
        pushRheinland = new QPushButton(centralWidget);
        pushRheinland->setObjectName(QString::fromUtf8("pushRheinland"));
        pushRheinland->setGeometry(QRect(330, 540, 100, 25));
        pushSaarland = new QPushButton(centralWidget);
        pushSaarland->setObjectName(QString::fromUtf8("pushSaarland"));
        pushSaarland->setGeometry(QRect(330, 580, 100, 25));
        pushSachsen = new QPushButton(centralWidget);
        pushSachsen->setObjectName(QString::fromUtf8("pushSachsen"));
        pushSachsen->setGeometry(QRect(490, 460, 100, 25));
        pushSachsenAnh = new QPushButton(centralWidget);
        pushSachsenAnh->setObjectName(QString::fromUtf8("pushSachsenAnh"));
        pushSachsenAnh->setGeometry(QRect(490, 500, 100, 25));
        pushSchleswig = new QPushButton(centralWidget);
        pushSchleswig->setObjectName(QString::fromUtf8("pushSchleswig"));
        pushSchleswig->setGeometry(QRect(490, 540, 100, 25));
        pushThuringen = new QPushButton(centralWidget);
        pushThuringen->setObjectName(QString::fromUtf8("pushThuringen"));
        pushThuringen->setGeometry(QRect(490, 580, 100, 25));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(5, 430, 595, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralWidget);
        tableView->raise();
        label->raise();
        splitter->raise();
        pushBaden->raise();
        pushBerlin->raise();
        pushBayern->raise();
        pushBrandenburg->raise();
        pushBremen->raise();
        pushHamburg->raise();
        pushHessen->raise();
        pushMecklenburg->raise();
        pushNiedersachsen->raise();
        pushNrw->raise();
        pushRheinland->raise();
        pushSaarland->raise();
        pushSachsen->raise();
        pushSachsenAnh->raise();
        pushSchleswig->raise();
        pushThuringen->raise();
        label_2->raise();
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "PostalEnchanced", nullptr));
        label->setText(QApplication::translate("MainWindow", "Wprowad\305\272 poprawny kod", nullptr));
        userInput->setPlaceholderText(QApplication::translate("MainWindow", "Wpisz pe\305\202ny kod pocztowy", nullptr));
        searchButton->setText(QApplication::translate("MainWindow", "Wyszukaj", nullptr));
        pushBaden->setText(QApplication::translate("MainWindow", "BADEN - W\303\234RT", nullptr));
        pushBayern->setText(QApplication::translate("MainWindow", "BAYERN", nullptr));
        pushBerlin->setText(QApplication::translate("MainWindow", "BERLIN", nullptr));
        pushBrandenburg->setText(QApplication::translate("MainWindow", "BRANDENBURG", nullptr));
        pushBremen->setText(QApplication::translate("MainWindow", "BREMEN", nullptr));
        pushHamburg->setText(QApplication::translate("MainWindow", "HAMBURG", nullptr));
        pushHessen->setText(QApplication::translate("MainWindow", "HESSEN", nullptr));
        pushMecklenburg->setText(QApplication::translate("MainWindow", "MECKLENBURG", nullptr));
        pushNiedersachsen->setText(QApplication::translate("MainWindow", "NIEDERSACHSEN", nullptr));
        pushNrw->setText(QApplication::translate("MainWindow", "NORDRHEIN - W", nullptr));
        pushRheinland->setText(QApplication::translate("MainWindow", "RHEINLAND - P", nullptr));
        pushSaarland->setText(QApplication::translate("MainWindow", "SAARLAND", nullptr));
        pushSachsen->setText(QApplication::translate("MainWindow", "SACHSEN", nullptr));
        pushSachsenAnh->setText(QApplication::translate("MainWindow", "SACHSEN - ANH.", nullptr));
        pushSchleswig->setText(QApplication::translate("MainWindow", "SCHLESWIG - H.", nullptr));
        pushThuringen->setText(QApplication::translate("MainWindow", "TH\303\234RINGEN", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Kliknij w land, \305\274eby sprawdzi\304\207 kiedy ma dni wolne", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
