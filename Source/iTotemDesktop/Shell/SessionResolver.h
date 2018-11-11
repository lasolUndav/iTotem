#ifndef SESSIONRESOLVER_H
#define SESSIONRESOLVER_H

#include "Session.h"
#include "SessionServices.h"

class SessionResolver
{
private:
    SessionServices* service;
    Session* current;

public:
    SessionResolver();
    virtual ~SessionResolver();
    Session* CurrentSession();
};

#endif
