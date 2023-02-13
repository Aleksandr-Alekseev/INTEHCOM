#ifndef SETTINGBUTTONSWINDOW_H
#define SETTINGBUTTONSWINDOW_H

#include <QDialog>

namespace Ui {
class settingButtonsWindow;
}

class settingButtonsWindow : public QDialog
{
    Q_OBJECT

public:
    explicit settingButtonsWindow(QWidget *parent = nullptr);
    ~settingButtonsWindow();

private slots:


    void on_close_clicked();

private:
    Ui::settingButtonsWindow *ui;
};

#endif // SETTINGBUTTONSWINDOW_H
