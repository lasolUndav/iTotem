#ifndef MEDIACONTENTVIEW_H
#define MEDIACONTENTVIEW_H

#include <QWidget>
#include "MediaContent.h"
#include <QString>

namespace Ui {
class MediaContentView;
}

class MediaContentView : public QWidget
{
    Q_OBJECT

public:
    explicit MediaContentView(const MediaContent* mediaContent,QWidget *parent = nullptr);
    ~MediaContentView();
    void setMediaContentName(string name);

private:
    Ui::MediaContentView *ui;
};

#endif
