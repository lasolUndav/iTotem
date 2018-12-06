#ifndef ICONTENTLISTVIEW_H
#define ICONTENTLISTVIEW_H

#include "Session.h"
#include "Content.h"

class IContentListView
{
public:
    IContentListView();
    virtual ~IContentListView();
    virtual void loadSession(const Session *session) = 0;
    virtual void loadContent(const Content *content) = 0;
};

#endif
