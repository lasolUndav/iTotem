#include "MediaContent.h"
#include <string>

MediaContent::MediaContent(string name) {
    setName(name);
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
void MediaContent::setName(string name){
    this->name = name;
}

string MediaContent::getName(){
    return this->name;

}
