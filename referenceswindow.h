#ifndef REFERENCESWINDOW_H
#define REFERENCESWINDOW_H

#include <QDialog>
#include <QtSql>
#include <QSqlTableModel>
#include <QSqlQueryModel>

namespace Ui {
class referencesWindow;
}

class referencesWindow : public QDialog
{
    Q_OBJECT

public:
    explicit referencesWindow(QWidget *parent = nullptr);
    ~referencesWindow();

private:
    Ui::referencesWindow *ui;

    QSqlDatabase database;
    QSqlTableModel *tableWorker, *tableSort,
    *tableSpecies, *tableSuppliers,
    *tableDrivers, *tableNumbers;

    /*QSqlQueryModel *modelWorkers, *modelSorts,
    *modelSpecies, *modelSuppliers, *modelDrivers, *modelNumbers;*/

};

#endif // REFERENCESWINDOW_H
