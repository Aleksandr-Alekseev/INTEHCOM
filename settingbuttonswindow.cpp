#include "settingbuttonswindow.h"
#include "ui_settingbuttonswindow.h"

settingButtonsWindow::settingButtonsWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::settingButtonsWindow)
{
    ui->setupUi(this);
}

settingButtonsWindow::~settingButtonsWindow()
{
    delete ui;
}



void settingButtonsWindow::on_close_clicked()
{
    close();
}

