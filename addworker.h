#ifndef ADDWORKER_H
#define ADDWORKER_H

#include <QDialog>

namespace Ui {
class addWorker;
}

class addWorker : public QDialog
{
    Q_OBJECT

public:
    explicit addWorker(QWidget *parent = nullptr);
    ~addWorker();

private slots:
    void on_pushButton_clicked();

private:
    Ui::addWorker *ui;
};

#endif // ADDWORKER_H
