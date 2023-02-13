#ifndef AUTOSORTWINDOW_H
#define AUTOSORTWINDOW_H

#include <QDialog>

namespace Ui {
class autosortWindow;
}

class autosortWindow : public QDialog
{
    Q_OBJECT

public:
    explicit autosortWindow(QWidget *parent = nullptr);
    ~autosortWindow();

private slots:

    void on_addRule_clicked();

private:
    Ui::autosortWindow *ui;
};

#endif // AUTOSORTWINDOW_H
