#include "settinglinewindow.h"
#include "ui_settinglinewindow.h"

settingLineWindow::settingLineWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::settingLineWindow)
{
    ui->setupUi(this);
}

settingLineWindow::~settingLineWindow()
{
    delete ui;
}

void settingLineWindow::on_close_clicked()
{
    close();
}

