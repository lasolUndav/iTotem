#include "SessionResolver.h"

SessionResolver::SessionResolver(){
    SessionServices* sessionServices = new SessionServices();
    this->current=sessionServices->getDefault();
}

Session* SessionResolver::CurrentSession(){
    return this->current;
}
