#ifndef ADDPARTIESWINDOW_H
#define ADDPARTIESWINDOW_H

#include <QDialog>

namespace Ui {
class addPartiesWindow;
}

class addPartiesWindow : public QDialog
{
    Q_OBJECT

public:
    explicit addPartiesWindow(QWidget *parent = nullptr);
    ~addPartiesWindow();

private slots:
    void on_close_clicked();

private:
    Ui::addPartiesWindow *ui;
};

#endif // ADDPARTIESWINDOW_H
