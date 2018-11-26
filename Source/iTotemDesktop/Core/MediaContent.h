#ifndef MEDIACONTENT_H
#define MEDIACONTENT_H

#include "core_global.h"
#include <string>

using std::string;

class CORESHARED_EXPORT MediaContent {
private:
    string path;
    string type;
    string name;
public:
    MediaContent();
    virtual ~MediaContent();
    void setPath(string path);
    string getPath();
    void setType(string type);
    string getType();
    void setName(string name);
    string getName();
};
#endif
