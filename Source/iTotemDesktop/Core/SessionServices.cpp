#include "SessionServices.h"
#include "Session.h"
SessionServices::SessionServices()
{

}
Session* SessionServices::getDefault()const{
    Session* session = new Session();
    session->addContent(new Content("Guia"));
    session->addContent(new Content("Muestra"));
    return session;
}
