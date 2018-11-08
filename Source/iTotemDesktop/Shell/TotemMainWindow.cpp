#include "TotemMainWindow.h"
#include "ui_TotemMainWindow.h"
#include "SessionResolver.h"
#include "ContentView.h"
#include <list>
using std::list;
TotemMainWindow::TotemMainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::TotemMainWindow),sessionResolver(new SessionResolver){
    ui->setupUi(this);
    LoadSession();

}
  //con SessionResolver para que mediante media content agregre el content
TotemMainWindow::~TotemMainWindow(){
    delete ui;
}

void TotemMainWindow::LoadSession(){
    Session* session=this->sessionResolver->CurrentSession();
    if(session){
        list<Content*> *listContent= session->getContent();

        list<Content*>::iterator contentIterator = listContent->begin();
            while(contentIterator != listContent->end()){
                this->ui->content->addWidget(new ContentView(*contentIterator));
                contentIterator++;

            }
    }
}
