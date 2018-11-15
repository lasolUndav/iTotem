#ifndef CONTENTVIEW_H
#define CONTENTVIEW_H

#include <QWidget>
#include "Content.h"
#include "IContentView.h"
#include "ContentViewPresenter.h"
namespace Ui {
class ContentView;
}

class ContentView : public QWidget, public IContentView
{
    Q_OBJECT

public:
    explicit ContentView(const Content* content, QWidget *parent = nullptr);
    void setContentName(string name);
    ~ContentView();


private:
    Ui::ContentView *ui;
    ContentViewPresenter* presenter;
};

#endif
