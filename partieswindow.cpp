#include "partieswindow.h"
#include "ui_partieswindow.h"
#include "addpartieswindow.h"

partieswindow::partieswindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::partieswindow)
{
    ui->setupUi(this);
}

partieswindow::~partieswindow()
{
    delete ui;
}

void partieswindow::on_pushButton_6_clicked()
{
    addPartiesWindow addpartie;
    addpartie.setModal(true);
    addpartie.exec();
}

