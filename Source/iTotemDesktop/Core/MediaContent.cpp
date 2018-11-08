#include "MediaContent.h"
#include <string>

MediaContent::MediaContent() {

}

MediaContent::~MediaContent() {

}

void MediaContent::setPath(string path) {
    this->path = path;
}

string MediaContent::getPath() {
    return this->path;
}

void MediaContent::setType(string type) {
    this->type = type;
}

string MediaContent::getType() {
    return this->type;
}
