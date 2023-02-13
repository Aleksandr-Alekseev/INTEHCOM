#include "volumewindow.h"
#include "ui_volumewindow.h"

volumeWindow::volumeWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::volumeWindow)
{
    ui->setupUi(this);
}

volumeWindow::~volumeWindow()
{
    delete ui;
}
