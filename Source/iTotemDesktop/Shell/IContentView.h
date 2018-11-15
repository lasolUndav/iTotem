#ifndef ICONTENTVIEW_H
#define ICONTENTVIEW_H
#include <string>

using std::string;

class IContentView
{
public:
    IContentView();
    virtual void setContentName(string name)=0;
    virtual ~IContentView();

};

#endif // ICONTENTVIEW_H
