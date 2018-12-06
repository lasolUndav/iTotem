#ifndef ICONTENTVIEW_H
#define ICONTENTVIEW_H
#include <string>
#include "IContentListView.h"

using std::string;

class IContentView
{
public:
    IContentView();
    virtual ~IContentView();
    virtual void setContentName(string name) = 0;
    virtual IContentListView* getParent() = 0;

};

#endif
