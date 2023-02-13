#include "addrulewindow.h"
#include "ui_addrulewindow.h"

addRuleWindow::addRuleWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addRuleWindow)
{
    ui->setupUi(this);
}

addRuleWindow::~addRuleWindow()
{
    delete ui;
}

void addRuleWindow::on_pushButton_8_clicked()
{
    close();
}

