#ifndef CONTENTLISTVIEW_H
#define CONTENTLISTVIEW_H

#include <QWidget>
#include "Session.h"
#include "Content.h"
#include "list"
#include "IContentListView.h"

using std::list;

namespace Ui {
class ContentListView;
}

class ContentListView : public QWidget, IContentListView
{
    Q_OBJECT

public:
    explicit ContentListView(QWidget *parent = nullptr);
    void loadSession(const Session *session);
    void loadContent(const Content *content);
    ~ContentListView();

private:
    Ui::ContentListView *ui;
    list<QWidget*>* currentContentList;
    void clearCurrentList();
    void loadContentListFromSession(const Session *session);
    void loadMediaContentListFromContent(const Content *content);
    void loadButtonList();
};

#endif
