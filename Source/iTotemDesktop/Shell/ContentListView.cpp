#include "ContentListView.h"
#include "ui_ContentListView.h"
#include "ContentView.h"
#include "MediaContentView.h"
#include "Content.h"
#include "MediaContent.h"
#include "Session.h"
#include <list>

using std::list;

ContentListView::ContentListView(QWidget *parent) : QWidget(parent), ui(new Ui::ContentListView), currentContentList(new list<QWidget*>) {
    ui->setupUi(this);
}

ContentListView::~ContentListView()
{
    clearCurrentList();
    delete currentContentList;
    delete ui;
}

void ContentListView::loadSession(const Session *session){
    clearCurrentList();
    loadContentListFromSession(session);
    loadButtonList();
}

void ContentListView::loadContent(const Content *content){
    clearCurrentList();
    loadMediaContentListFromContent(content);
    loadButtonList();
}

void ContentListView::loadContentListFromSession(const Session *session){
    list<Content*> *listContent= session->getContent();
    list<Content*>::iterator contentIterator = listContent->begin();
    while(contentIterator != listContent->end()){
        this->currentContentList->push_back(new ContentView(this,*contentIterator));
        contentIterator++;
    }
}

void ContentListView::loadMediaContentListFromContent(const Content *content){
    list<MediaContent*> *listMediaContent= content->getMediaContent();
    list<MediaContent*>::iterator mediaContentIterator = listMediaContent->begin();

    while(mediaContentIterator != listMediaContent->end()){
        this->currentContentList->push_back(new MediaContentView(*mediaContentIterator));
        mediaContentIterator++;
    }
}

void ContentListView::clearCurrentList(){
    list<QWidget*>::iterator wIterator = this->currentContentList->begin();
    while(wIterator != currentContentList->end()){
        this->ui->buttonList->removeWidget(*wIterator);
        delete *wIterator;
        wIterator++;
    }
    this->currentContentList->clear();
}

void ContentListView::loadButtonList(){
    list<QWidget*>::iterator wIterator = this->currentContentList->begin();
    while(wIterator != currentContentList->end()){
        this->ui->buttonList->addWidget(*wIterator);
        wIterator++;
    }
}
