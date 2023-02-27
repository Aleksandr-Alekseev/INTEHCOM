#ifndef ADDSORTS_H
#define ADDSORTS_H

#include <QDialog>

namespace Ui {
class addSorts;
}

class addSorts : public QDialog
{
    Q_OBJECT

public:
    explicit addSorts(QWidget *parent = nullptr);
    ~addSorts();

private slots:
    void on_pushButton_clicked();

private:
    Ui::addSorts *ui;
};

#endif // ADDSORTS_H
