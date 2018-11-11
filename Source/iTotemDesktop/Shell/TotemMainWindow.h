#ifndef TOTEMMAINWINDOW_H
#define TOTEMMAINWINDOW_H

#include <QMainWindow>
#include "SessionResolver.h"

namespace Ui {
class TotemMainWindow;
}

class TotemMainWindow : public QMainWindow
{
    Q_OBJECT

private:
    Ui::TotemMainWindow *ui;
    SessionResolver* sessionResolver;
    void LoadSession();

public:
    explicit TotemMainWindow(QWidget *parent = nullptr);
    ~TotemMainWindow();
};

#endif
