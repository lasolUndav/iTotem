#include "TotemMainWindow.h"
#include "ui_TotemMainWindow.h"
#include "SessionResolver.h"
#include "ContentView.h"
#include "ContentListView.h"

using std::list;

TotemMainWindow::TotemMainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::TotemMainWindow),sessionResolver(new SessionResolver), contentList(new ContentListView) {
    ui->setupUi(this);
    loadSession();
    loadDesigner();

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
        this->ui->verticalLayout->addWidget(this->contentList);
    }
}

void TotemMainWindow::loadDesigner(){
    //BACKGROUND
    QString url = R"(C:/projects/iTotem/Source/image/fondo.jpg)";
    QPixmap img(url);   //load image
    QPalette palette;
    palette.setBrush(QPalette::Background, img);//set the pic to the background
    this->setPalette(palette); //show the background pic

    //DESIGNER BUTTONS
    this->setStyleSheet("QPushButton { font: 75 16pt ""Calibri""; background-color: lightblue; width: 200px; height: 100px; }");
}
