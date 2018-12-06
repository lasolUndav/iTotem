#include "ContentView.h"
#include "ui_ContentView.h"
#include <QString>
#include "ContentViewPresenter.h"
#include "IContentListView.h"

ContentView::ContentView(IContentListView* list, const Content* content, QWidget *parent) : QWidget(parent), ui(new Ui::ContentView), parent(list){
    ui->setupUi(this);
    this->presenter= new ContentViewPresenter(this);
    this->presenter->setContent(content);
    connect(ui->contentButton, SIGNAL (released()), this, SLOT (onClick()));
}

ContentView::~ContentView(){
    delete ui;
}

void ContentView::setContentName(string name){
    ui->contentButton->setText(QString::fromUtf8(name.c_str()));
}

void ContentView::onClick(){
    this->presenter->openContent();
}

IContentListView* ContentView::getParent(){
    return this->parent;
}

