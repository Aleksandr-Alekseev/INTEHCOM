#ifndef SORTINGTABLEWINDOW_H
#define SORTINGTABLEWINDOW_H

#include <QDialog>

namespace Ui {
class sortingTableWindow;
}

class sortingTableWindow : public QDialog
{
    Q_OBJECT

public:
    explicit sortingTableWindow(QWidget *parent = nullptr);
    ~sortingTableWindow();

private slots:
    void on_addRule_clicked();

private:
    Ui::sortingTableWindow *ui;
};

#endif // SORTINGTABLEWINDOW_H
