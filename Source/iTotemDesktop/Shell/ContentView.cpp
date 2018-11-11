#include "ContentView.h"
#include "ui_ContentView.h"
#include <QString>

ContentView::ContentView(const Content* content, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ContentView)
{
    ui->setupUi(this);
    ui->contentButton->setText(QString::fromUtf8(content->getName().c_str()));
}

ContentView::~ContentView()
{
    delete ui;
}
