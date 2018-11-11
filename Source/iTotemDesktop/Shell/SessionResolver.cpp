#include "SessionResolver.h"
#include "Session.h"
#include "SessionServices.h"

SessionResolver::SessionResolver(): service(new SessionServices), current(nullptr){
}

Session* SessionResolver::CurrentSession(){
    if(this->current==nullptr){// TODO hardcode para trabajar con la session default, debe cambiarse
        this->current = this->service->getDefault();
    }

    return this->current;
}

SessionResolver::~SessionResolver() {
    delete this->service;
    if(this->current!=nullptr){
        delete this->current;
    }
}
