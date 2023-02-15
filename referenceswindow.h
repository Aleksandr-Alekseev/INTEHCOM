#ifndef REFERENCESWINDOW_H
#define REFERENCESWINDOW_H

#include <QDialog>
#include <QtSql>
#include <QSqlTableModel>


namespace Ui {
class referencesWindow;
}

class referencesWindow : public QDialog
{
    Q_OBJECT

public:
    explicit referencesWindow(QWidget *parent = nullptr);
    ~referencesWindow();

private slots:
    void on_removeSorts_clicked();

    void on_removeWorkers_clicked();

    void on_removeSpecies_clicked();

    void on_removeSuppliers_clicked();

    void on_removeDrivers_clicked();

    void on_removeNumbers_clicked();


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
