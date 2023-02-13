#ifndef VOLUMEWINDOW_H
#define VOLUMEWINDOW_H

#include <QDialog>

namespace Ui {
class volumeWindow;
}

class volumeWindow : public QDialog
{
    Q_OBJECT

public:
    explicit volumeWindow(QWidget *parent = nullptr);
    ~volumeWindow();

private:
    Ui::volumeWindow *ui;
};

#endif // VOLUMEWINDOW_H
