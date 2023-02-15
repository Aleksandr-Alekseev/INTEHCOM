#include "referenceswindow.h"
#include "ui_referenceswindow.h"

#include "QSqlDatabase"
#include "QDebug"

#include <QSql>
#include <QSqlTableModel>
#include <QMessageBox>
#include <QItemSelectionModel>
#include <QString>
#include <QModelIndex>
//#include <QVariant>

//#include <QListView>
#include <QSqlQuery>
#include <QSqlQueryModel>
//#include "QSqlError"


referencesWindow::referencesWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::referencesWindow)
{
    ui->setupUi(this);

    //Подключение к БД
    database = QSqlDatabase::addDatabase("QODBC");
    database.setHostName("localhost");
    database.setUserName("root");
    database.setPassword("root");
    database.setDatabaseName("testSoft");

    //Проверка подключения к БД
    if(database.open()) {

            //Получение данных по работникам
            tableWorker = new QSqlTableModel;
            tableWorker->setTable("workers");
            tableWorker->setEditStrategy(QSqlTableModel::OnManualSubmit);
            tableWorker->select();
            //tableWorker->setHeaderData(0, Qt::Horizontal, tr("ID"));
            //tableWorker->setHeaderData(1, Qt::Horizontal, tr("Работник"));
            //Отображение данных в окне справочника
            ui->workers->setModel(tableWorker);
            ui->workers->setColumnHidden(0, true); //Скрываем 0 столбец (id)
            ui->workers->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch);

            /*modelWorkers = new QSqlQueryModel;
            QSqlQuery queryWorkers;
            queryWorkers.exec("SELECT * FROM workers");
            modelWorkers->setQuery(queryWorkers);
            ui->workers->setModel(modelWorkers);
            ui->workers->setColumnHidden(0, true); //Скрываем 0 столбец (id)
            ui->workers->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch);*/


            //Получение данных по сортам
            tableSort = new QSqlTableModel;
            tableSort->setTable("sorts");
            tableSort->setEditStrategy(QSqlTableModel::OnManualSubmit);
            tableSort->select();
            //tableWorker->setHeaderData(0, Qt::Horizontal, tr("ID"));
            //tableSort->setHeaderData(1, Qt::Horizontal, tr("Сорта"));
            //Отображение данных в окне справочника
            ui->sorts->setModel(tableSort);
            ui->sorts->setColumnHidden(0, true);//Скрываем 0 столбец (id)
            ui->sorts->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch);

            /*modelSorts = new QSqlQueryModel;
            QSqlQuery querySorts;
            querySorts.exec("SELECT * FROM sorts");
            modelSorts->setQuery(querySorts);
            ui->sorts->setModel(modelSorts);
            ui->sorts->setColumnHidden(0, true); //Скрываем 0 столбец (id)
            ui->sorts->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch);*/


            //Получение данных по породам
            tableSpecies = new QSqlTableModel;
            tableSpecies->setTable("species");
            tableSpecies->setEditStrategy(QSqlTableModel::OnManualSubmit);
            tableSpecies->select();
            //tableWorker->setHeaderData(0, Qt::Horizontal, tr("ID"));
            //tableSpecies->setHeaderData(1, Qt::Horizontal, tr("Породы"));
            //Отображение данных в окне справочника
            ui->species->setModel(tableSpecies);
            ui->species->setColumnHidden(0, true);//Скрываем 0 столбец (id)
            ui->species->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch);

            /*modelSpecies = new QSqlQueryModel;
            QSqlQuery querySpecies;
            querySpecies.exec("SELECT * FROM species");
            modelSpecies->setQuery(querySpecies);
            ui->species->setModel(modelSpecies);
            ui->species->setColumnHidden(0, true); //Скрываем 0 столбец (id)
            ui->species->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch);*/


            //Получение данных по поставщикам
            tableSuppliers = new QSqlTableModel;
            tableSuppliers->setTable("suppliers");
            tableSuppliers->setEditStrategy(QSqlTableModel::OnManualSubmit);
            tableSuppliers->select();
            //tableWorker->setHeaderData(0, Qt::Horizontal, tr("ID"));
            //tableSuppliers->setHeaderData(1, Qt::Horizontal, tr("Поставщики"));
            //Отображение данных в окне справочника
            ui->suppliers->setModel(tableSuppliers);
            ui->suppliers->setColumnHidden(0, true);//Скрываем 0 столбец (id)
            ui->suppliers->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch);

            /*modelSuppliers = new QSqlQueryModel;
            QSqlQuery querySuppliers;
            querySuppliers.exec("SELECT * FROM suppliers");
            modelSuppliers->setQuery(querySuppliers);
            ui->suppliers->setModel(modelSuppliers);
            ui->suppliers->setColumnHidden(0, true); //Скрываем 0 столбец (id)
            ui->suppliers->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch);*/


            //Получение данных по водителям
            tableDrivers = new QSqlTableModel;
            tableDrivers->setTable("drivers");
            tableDrivers->setEditStrategy(QSqlTableModel::OnManualSubmit);
            tableDrivers->select();
            //tableWorker->setHeaderData(0, Qt::Horizontal, tr("ID"));
            //tableDrivers->setHeaderData(1, Qt::Horizontal, tr("Водители"));
            //Отображение данных в окне справочника
            ui->drivers->setModel(tableDrivers);
            ui->drivers->setColumnHidden(0, true);//Скрываем 0 столбец (id)
            ui->drivers->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch);

            /*modelDrivers = new QSqlQueryModel;
            QSqlQuery queryDrivers;
            queryDrivers.exec("SELECT * FROM drivers");
            modelDrivers->setQuery(queryDrivers);
            ui->drivers->setModel(modelDrivers);
            ui->drivers->setColumnHidden(0, true); //Скрываем 0 столбец (id)
            ui->drivers->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch);*/


            //Получение данных по машинам
            tableNumbers = new QSqlTableModel;
            tableNumbers->setTable("numbers");
            tableNumbers->setEditStrategy(QSqlTableModel::OnManualSubmit);
            tableNumbers->select();
            //tableWorker->setHeaderData(0, Qt::Horizontal, tr("ID"));
            //tableNumbers->setHeaderData(1, Qt::Horizontal, tr("Модель"));
            //tableNumbers->setHeaderData(2, Qt::Horizontal, tr("Гос.номер"));
            //Отображение данных в окне справочника
            ui->numbers->setModel(tableNumbers);
            ui->numbers->setColumnHidden(0, true);//Скрываем 0 столбец (id)
            ui->numbers->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch);
            ui->numbers->horizontalHeader()->setSectionResizeMode(2, QHeaderView::Stretch);

            /*modelNumbers = new QSqlQueryModel;
            QSqlQuery queryNumbers;
            queryNumbers.exec("SELECT * FROM numbers");
            modelNumbers->setQuery(queryNumbers);
            ui->numbers->setModel(modelNumbers);
            ui->numbers->setColumnHidden(0, true); //Скрываем 0 столбец (id)
            ui->numbers->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch);
            ui->numbers->horizontalHeader()->setSectionResizeMode(2, QHeaderView::Stretch);*/

    }else {
        QMessageBox::information(this,"Failed","Connection failed");
    }
}

referencesWindow::~referencesWindow()
{
    delete ui;
    database.close();
}

void referencesWindow::on_removeSorts_clicked()
{
    if(ui->sorts->selectionModel()->hasSelection())
    {

       /*QModelIndex idIndex = ui->sorts->selectionModel()->selectedIndexes().first();
       if(idIndex.isValid())
       {
           QString idRow = idIndex.data().toString();
           qDebug() << idRow;

       } else
       {
           QMessageBox::information(this,"Failed","Кнопка не работает");
       }*/

        QModelIndex current = ui->sorts->currentIndex();
        int id = current.sibling(current.row (), 0).data ().toInt ();
        QSqlQuery query (QString ("delete from sorts where id = %1").arg (id));

    }
    //QVariant idIndex = ui->sorts->model()->data(ui->sorts->currentIndex());
    //int idRow = 0;
    //idRow = idIndex.toInt();
    //qDebug() << idRow;

}


void referencesWindow::on_removeWorkers_clicked()
{
    QMessageBox::information(this,"Failed","Кнопка работает");
}


void referencesWindow::on_removeSpecies_clicked()
{
    QMessageBox::information(this,"Failed","Кнопка работает");
}


void referencesWindow::on_removeSuppliers_clicked()
{
    QMessageBox::information(this,"Failed","Кнопка работает");
}


void referencesWindow::on_removeDrivers_clicked()
{
    QMessageBox::information(this,"Failed","Кнопка работает");
}


void referencesWindow::on_removeNumbers_clicked()
{
    QMessageBox::information(this,"Failed","Кнопка работает");
}

