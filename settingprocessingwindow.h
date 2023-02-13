#ifndef SETTINGPROCESSINGWINDOW_H
#define SETTINGPROCESSINGWINDOW_H

#include <QDialog>

namespace Ui {
class settingProcessingWindow;
}

class settingProcessingWindow : public QDialog
{
    Q_OBJECT

public:
    explicit settingProcessingWindow(QWidget *parent = nullptr);
    ~settingProcessingWindow();

private slots:
    void on_close_clicked();

private:
    Ui::settingProcessingWindow *ui;
};

#endif // SETTINGPROCESSINGWINDOW_H
