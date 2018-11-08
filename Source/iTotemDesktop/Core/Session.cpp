#include "Session.h"
#include "Content.h"
#include <list>

using std::list;

Session::Session() {
    this->content = new list<Content*>();
}

Session::~Session() {
    list<Content*>::iterator contentIterator = this->content->begin();
    while(contentIterator != this->content->end()){
        delete (*contentIterator);
        contentIterator++;
    }
    delete this->content;
}

list<Content*>* Session::getContent(){
    return this->content;
}

void Session::addContent(Content* item){
    this->content->push_back(item);
}


