#include "addsorts.h"
#include "ui_addsorts.h"

#include <QSql>
#include <QSqlQuery>
#include <QString>

addSorts::addSorts(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addSorts)
{
    ui->setupUi(this);
}

addSorts::~addSorts()
{
    delete ui;
}

void addSorts::on_pushButton_clicked() //Добавление в таблицу сортов
{
    QString s;
    s = ui->lineEdit->text();
    QSqlQuery q;
    q.prepare("INSERT INTO sorts (nameSort) "
    "VALUES (:name)");
    q.bindValue(":name", s);
    q.exec();
}

