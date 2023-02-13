#ifndef POCKETSWINDOW_H
#define POCKETSWINDOW_H

#include <QDialog>

namespace Ui {
class pocketsWindow;
}

class pocketsWindow : public QDialog
{
    Q_OBJECT

public:
    explicit pocketsWindow(QWidget *parent = nullptr);
    ~pocketsWindow();

private:
    Ui::pocketsWindow *ui;
};

#endif // POCKETSWINDOW_H
