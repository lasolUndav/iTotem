#include <list>
#include "TotemMainWindow.h"
#include "ui_TotemMainWindow.h"
#include "SessionResolver.h"
#include "ContentView.h"

using std::list;

TotemMainWindow::TotemMainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::TotemMainWindow),sessionResolver(new SessionResolver){    
    ui->setupUi(this);
    LoadSession();
}

void TotemMainWindow::LoadSession(){
    Session* session=this->sessionResolver->CurrentSession();
    if(session!=nullptr){
        list<Content*> *listContent= session->getContent();
        list<Content*>::iterator contentIterator = listContent->begin();
            while(contentIterator != listContent->end()){                
                this->ui->contentViewLayout->addWidget(new ContentView(*contentIterator));
                contentIterator++;
            }
    }
}

TotemMainWindow::~TotemMainWindow(){
    delete ui;
    delete this->sessionResolver;
}
