#ifndef CONTENT_H
#define CONTENT_H

#include "core_global.h"
#include "MediaContent.h"
#include <list>
#include <string>

using std::list;
using std::string;

class CORESHARED_EXPORT Content {
private:
    string name;
    string description;
    list<MediaContent*>* mediaContent;
public:
    Content(string name);
    virtual ~Content();
    void setName(string name);
    string getName()const;
    void setDescription(string description);
    string getDescription()const;
    list<MediaContent*>* getMediaContent();
};

#endif
