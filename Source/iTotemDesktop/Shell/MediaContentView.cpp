#include "MediaContentView.h"
#include "ui_MediaContentView.h"

MediaContentView::MediaContentView(const MediaContent* mediaContent,QWidget *parent) : QWidget(parent), ui(new Ui::MediaContentView){
    ui->setupUi(this);
    ui->mediaContentButton->setMaximumSize(250,50);
    ui->mediaContentButton->setMinimumSize(250,50);
}

MediaContentView::~MediaContentView()
{
    delete ui;
}

void MediaContentView::setMediaContentName(string name){
    ui->mediaContentButton->setText(QString::fromUtf8(name.c_str()));
}
