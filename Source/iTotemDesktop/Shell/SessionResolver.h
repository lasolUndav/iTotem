#ifndef SESSIONRESOLVER_H
#define SESSIONRESOLVER_H

#include "SessionServices.h"

class SessionResolver
{
public:
    SessionResolver();
    Session* CurrentSession();

private:
    Session* current;
     //Esta funcion es la responsable de traer la seccion actual
};


#endif // SESSIONRESOLVER_H
