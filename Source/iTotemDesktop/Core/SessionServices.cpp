#include "SessionServices.h"
#include "Session.h"
SessionServices::SessionServices()
{

}
Session* SessionServices::getDefault()const{
    Session* session = new Session();
    Content* guia = new Content("Guia");
    session->addContent(guia);
    session->addContent(new Content("Muestra"));
    guia->getMediaContent()->push_back(new MediaContent("Video"));
    guia->getMediaContent()->push_back(new MediaContent("Texto"));

    return session;
}
