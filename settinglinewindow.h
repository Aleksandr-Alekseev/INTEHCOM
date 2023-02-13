#ifndef SETTINGLINEWINDOW_H
#define SETTINGLINEWINDOW_H

#include <QDialog>

namespace Ui {
class settingLineWindow;
}

class settingLineWindow : public QDialog
{
    Q_OBJECT

public:
    explicit settingLineWindow(QWidget *parent = nullptr);
    ~settingLineWindow();

private slots:
    void on_close_clicked();

private:
    Ui::settingLineWindow *ui;
};

#endif // SETTINGLINEWINDOW_H
