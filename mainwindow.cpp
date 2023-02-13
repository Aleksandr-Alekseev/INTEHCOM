#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "partieswindow.h"
#include "volumewindow.h"
#include "sortingtablewindow.h"
#include "autosortwindow.h"
#include "pocketswindow.h"
#include "referenceswindow.h"
#include "settingswindow.h"

#include <QRect>
#include <QApplication>
#include <QScreen>
#include <QDebug>
#include <QDesktopServices>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    //Установка размера главного окна и его конструктор
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect  screenGeometry = screen->geometry();
    int height = screenGeometry.height();
    int width = screenGeometry.width();
    ui->setupUi(this);
    this->resize(width,height);


    //Выбор количества отображаемых строк таблицы
    ui->countRow->addItem("10");
    ui->countRow->addItem("20");
    ui->countRow->addItem("30");
    ui->countRow->addItem("40");

}


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_close_clicked()
{
    close();
}


void MainWindow::on_parties_clicked()
{
    partieswindow parties;
    parties.setModal(true);
    parties.exec();

    //parties = new partieswindow(this);
    //parties->show();
}


void MainWindow::on_volumes_clicked()
{
    volumeWindow volume;
    volume.setModal(true);
    volume.exec();

    //volume = new volumeWindow(this);
    //volume->show();
}


void MainWindow::on_sorting_clicked()
{
    sortingTableWindow sortingTable;
    sortingTable.setModal(true);
    sortingTable.exec();

    //sortingTable = new sortingTableWindow(this);
    //sortingTable->show();
}


void MainWindow::on_autosort_clicked()
{
    autosortWindow autoTable;
    autoTable.setModal(true);
    autoTable.exec();

    //autoTable = new autosortWindow(this);
    //autoTable->show();
}


void MainWindow::on_pockets_clicked()
{
    pocketsWindow pocket;
    pocket.setModal(true);
    pocket.exec();

    //pocket = new pocketsWindow(this);
    //pocket->show();
}


void MainWindow::on_references_clicked()
{
    referencesWindow reference;
    reference.setModal(true);
    reference.exec();

    //reference = new referencesWindow(this);
    //reference->show();
}


void MainWindow::on_settings_clicked()
{
    settingsWindow settings;
    settings.setModal(true);
    settings.exec();
}


void MainWindow::on_reports_clicked()
{
    QDesktopServices::openUrl(QUrl("file:///C:/OpenServer/domains/localhost/index.html", QUrl::TolerantMode));
}

