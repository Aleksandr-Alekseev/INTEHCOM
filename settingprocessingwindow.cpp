#include "settingprocessingwindow.h"
#include "ui_settingprocessingwindow.h"

settingProcessingWindow::settingProcessingWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::settingProcessingWindow)
{
    ui->setupUi(this);
}

settingProcessingWindow::~settingProcessingWindow()
{
    delete ui;
}

void settingProcessingWindow::on_close_clicked()
{
    close();
}

