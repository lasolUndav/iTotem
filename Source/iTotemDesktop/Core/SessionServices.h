#ifndef SESSIONSERVICES_H
#define SESSIONSERVICES_H
#include "core_global.h"
#include "Session.h"

class CORESHARED_EXPORT SessionServices
{
public:
    SessionServices();
    Session* getDefault()const;
};

#endif
