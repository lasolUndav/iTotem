#include "TotemMainWindow.h"
#include "ui_TotemMainWindow.h"
#include "SessionResolver.h"
#include "ContentView.h"
#include "ContentListView.h"

TotemMainWindow::TotemMainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::TotemMainWindow),sessionResolver(new SessionResolver), contentList(new ContentListView) {
    ui->setupUi(this);
    loadSession();
}

TotemMainWindow::~TotemMainWindow(){
    delete ui;
    delete this->contentList;
    delete this->sessionResolver;    
}

void TotemMainWindow::loadSession(){
    Session* session = this->sessionResolver->CurrentSession();
    if(session != nullptr){

        this->contentList->loadSession(session);
        this->ui->contentViewLayout->addWidget(this->contentList);
    }
}
