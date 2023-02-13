#include "addpartieswindow.h"
#include "ui_addpartieswindow.h"

addPartiesWindow::addPartiesWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addPartiesWindow)
{
    ui->setupUi(this);
}

addPartiesWindow::~addPartiesWindow()
{
    delete ui;
}

void addPartiesWindow::on_close_clicked()
{
    close();
}

