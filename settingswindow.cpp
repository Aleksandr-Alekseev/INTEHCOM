#include "settingswindow.h"
#include "ui_settingswindow.h"
#include "settinglinewindow.h"
#include "settingbuttonswindow.h"
#include "settingprocessingwindow.h"

settingsWindow::settingsWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::settingsWindow)
{
    ui->setupUi(this);
}

settingsWindow::~settingsWindow()
{
    delete ui;
}


void settingsWindow::on_settingLine_clicked()
{
    settingLineWindow setline;
    setline.setModal(true);
    setline.exec();
}


void settingsWindow::on_settingButtons_clicked()
{
    settingButtonsWindow setbut;
    setbut.setModal(true);
    setbut.exec();
}


void settingsWindow::on_settingProcessing_clicked()
{
    settingProcessingWindow setproc;
    setproc.setModal(true);
    setproc.exec();
}


void settingsWindow::on_pushButton_6_clicked()
{
    close();
}

