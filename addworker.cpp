#include "addworker.h"
#include "ui_addworker.h"

#include <QSql>
#include <QSqlQuery>
#include <QString>

addWorker::addWorker(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addWorker)
{
    ui->setupUi(this);
}

addWorker::~addWorker()
{
    delete ui;
}

void addWorker::on_pushButton_clicked()
{
    QString s;
    s = ui->lineEdit->text();
    QSqlQuery q;
    q.prepare("INSERT INTO workers (nameWorker) "
    "VALUES (:name)");
    q.bindValue(":name", s);
    q.exec();
}

