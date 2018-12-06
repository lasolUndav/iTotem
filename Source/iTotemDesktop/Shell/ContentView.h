#ifndef CONTENTVIEW_H
#define CONTENTVIEW_H

#include <QWidget>
#include "Content.h"
#include "IContentView.h"
#include "IContentListView.h"
#include "ContentViewPresenter.h"

namespace Ui {
class ContentView;
}

class ContentView : public QWidget, public IContentView
{
    Q_OBJECT

public:
    explicit ContentView(IContentListView* list, const Content* content, QWidget *parent = nullptr);
    void setContentName(string name);
    IContentListView* getParent();

    ~ContentView();

private slots:
    void onClick();

private:
    Ui::ContentView *ui;
    ContentViewPresenter* presenter;
    IContentListView* parent;
};

#endif
