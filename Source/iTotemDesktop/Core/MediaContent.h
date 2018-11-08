#ifndef MEDIACONTENT_H
#define MEDIACONTENT_H

#include <string>

using std::string;

class MediaContent {
private:
    string path;
    string type;
public:
    MediaContent();
    virtual ~MediaContent();
    void setPath(string path);
    string getPath();
    void setType(string type);
    string getType();
};
#endif
