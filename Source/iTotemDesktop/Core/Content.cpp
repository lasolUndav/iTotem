#include "Content.h"
#include "MediaContent.h"
#include <list>
#include <string>

using std::list;
using std::string;

Content::Content(string name) {
    this->mediaContent = new list<MediaContent*>();
    setName(name);
}

Content::~Content() {
    list<MediaContent*>::iterator contentIterator = this->mediaContent->begin();
        while(contentIterator != this->mediaContent->end()){
            delete (*contentIterator);
            contentIterator++;
        }
        delete this->mediaContent;
}

void Content::setName(string name) {
    this->name = name;
}

string Content::getName()const {
    return this->name;
}

void Content::setDescription(string description) {
    this->description = description;
}

string Content::getDescription() const{
    return this->description;
}

list<MediaContent*>* Content::getMediaContent()const{
    return this->mediaContent;
}
