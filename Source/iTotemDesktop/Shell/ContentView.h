#ifndef CONTENTVIEW_H
#define CONTENTVIEW_H

#include <QWidget>
#include "Content.h"

namespace Ui {
class ContentView;
}

class ContentView : public QWidget
{
    Q_OBJECT

public:
    explicit ContentView(const Content* content, QWidget *parent = nullptr);
    ~ContentView();

private:
    Ui::ContentView *ui;
};

#endif
