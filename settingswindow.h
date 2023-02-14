#ifndef SETTINGSWINDOW_H
#define SETTINGSWINDOW_H

#include <QDialog>

namespace Ui {
class settingsWindow;
}

class settingsWindow : public QDialog
{
    Q_OBJECT

public:
    explicit settingsWindow(QWidget *parent = nullptr);
    ~settingsWindow();

private slots:

    void on_settingLine_clicked();

    void on_settingButtons_clicked();

    void on_settingProcessing_clicked();

    void on_Cancel_clicked();

private:
    Ui::settingsWindow *ui;
};

#endif // SETTINGSWINDOW_H
