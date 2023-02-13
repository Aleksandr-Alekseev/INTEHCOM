#ifndef ADDRULEWINDOW_H
#define ADDRULEWINDOW_H

#include <QDialog>

namespace Ui {
class addRuleWindow;
}

class addRuleWindow : public QDialog
{
    Q_OBJECT

public:
    explicit addRuleWindow(QWidget *parent = nullptr);
    ~addRuleWindow();

private slots:
    void on_pushButton_8_clicked();

private:
    Ui::addRuleWindow *ui;
};

#endif // ADDRULEWINDOW_H
