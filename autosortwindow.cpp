#include "autosortwindow.h"
#include "ui_autosortwindow.h"
#include "addrulewindow.h"

autosortWindow::autosortWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::autosortWindow)
{
    ui->setupUi(this);
}

autosortWindow::~autosortWindow()
{
    delete ui;
}

void autosortWindow::on_addRule_clicked()
{
    addRuleWindow addrules;
    addrules.setModal(true);
    addrules.exec();
}

