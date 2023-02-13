#include "sortingtablewindow.h"
#include "ui_sortingtablewindow.h"
#include "addrulewindow.h"

sortingTableWindow::sortingTableWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sortingTableWindow)
{
    ui->setupUi(this);
}

sortingTableWindow::~sortingTableWindow()
{
    delete ui;
}

void sortingTableWindow::on_addRule_clicked()
{
    addRuleWindow addrule;
    addrule.setModal(true);
    addrule.exec();
}

