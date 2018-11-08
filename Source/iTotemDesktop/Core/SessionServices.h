#ifndef SESSIONSERVICES_H
#define SESSIONSERVICES_H
#include "Session.h"

class SessionServices
{
public:
    SessionServices();
    Session* getDefault()const;
};

#endif
