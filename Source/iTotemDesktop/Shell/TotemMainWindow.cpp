#include "TotemMainWindow.h"
#include "ui_TotemMainWindow.h"
#include "SessionResolver.h"
#include "ContentView.h"
#include "ContentListView.h"

using std::list;

TotemMainWindow::TotemMainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::TotemMainWindow),sessionResolver(new SessionResolver), contentList(new ContentListView) {
    ui->setupUi(this);
    loadSession();

    QString url = R"(C:/projects/iTotem/Source/image/fondo.png)";
    QPixmap img(url);
    ui->label->setPixmap(img);
    this->setStyleSheet("QPushButton { background-color: lightblue; }");

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
