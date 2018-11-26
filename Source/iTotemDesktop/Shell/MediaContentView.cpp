#include "MediaContentView.h"
#include "ui_MediaContentView.h"

MediaContentView::MediaContentView(const MediaContent* mediaContent,QWidget *parent) : QWidget(parent), ui(new Ui::MediaContentView){
    ui->setupUi(this);
}

MediaContentView::~MediaContentView()
{
    delete ui;
}

void MediaContentView::setMediaContentName(string name){
    ui->mediaContentButton->setText(QString::fromUtf8(name.c_str()));

}
