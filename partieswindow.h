#ifndef PARTIESWINDOW_H
#define PARTIESWINDOW_H

#include <QDialog>

namespace Ui {
class partieswindow;
}

class partieswindow : public QDialog
{
    Q_OBJECT

public:
    explicit partieswindow(QWidget *parent = nullptr);
    ~partieswindow();

private slots:
    void on_pushButton_6_clicked();

private:
    Ui::partieswindow *ui;
};

#endif // PARTIESWINDOW_H
