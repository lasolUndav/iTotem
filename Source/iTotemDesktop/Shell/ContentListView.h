#ifndef CONTENTLISTVIEW_H
#define CONTENTLISTVIEW_H

#include <QWidget>
#include "Session.h"
#include "Content.h"
#include "list"

using std::list;

namespace Ui {
class ContentListView;
}

class ContentListView : public QWidget
{
    Q_OBJECT

public:
    explicit ContentListView(QWidget *parent = nullptr);
    void loadSession(Session *session);
    void loadContent(Content *content);
    ~ContentListView();

private:
    Ui::ContentListView *ui;
    list<QWidget*>* currentContentList;
    void clearCurrentList();
    void loadContentListFromSession(Session *session);
    void loadMediaContentListFromContent(Content *content);
    void loadButtonList();
};

#endif
