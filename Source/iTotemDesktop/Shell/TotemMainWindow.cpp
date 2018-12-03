#include <list>
#include "TotemMainWindow.h"
#include "ui_TotemMainWindow.h"
#include "SessionResolver.h"
#include "ContentView.h"

using std::list;

TotemMainWindow::TotemMainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::TotemMainWindow),sessionResolver(new SessionResolver){
    ui->setupUi(this);
    LoadSession();
    QString url = R"(C:/projects/iTotem/Source/image/fondoTotem.png)";
    QPixmap img(url);
    img.scaled(ui->label->width(),ui->label->height(), Qt::AspectRatioMode::IgnoreAspectRatio);
    ui->label->setPixmap(img);
    this->setStyleSheet("QPushButton { background-color: lightblue; }");

}

void TotemMainWindow::LoadSession(){
    Session* session=this->sessionResolver->CurrentSession();
    if(session!=nullptr){
        list<Content*> *listContent= session->getContent();
        list<Content*>::iterator contentIterator = listContent->begin();
            while(contentIterator != listContent->end()){                
                this->ui->contentViewLayout->addWidget(new ContentView(*contentIterator));
                ContentView(*contentIterator).setStyleSheet("background-color: blue);");
                contentIterator++;
            }
    }
}

TotemMainWindow::~TotemMainWindow(){
    delete ui;
    delete this->sessionResolver;
}
