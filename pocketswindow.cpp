#include "pocketswindow.h"
#include "ui_pocketswindow.h"

pocketsWindow::pocketsWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pocketsWindow)
{
    ui->setupUi(this);
}

pocketsWindow::~pocketsWindow()
{
    delete ui;
}
