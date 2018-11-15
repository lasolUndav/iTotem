#ifndef CONTENTVIEWPRESENTER_H
#define CONTENTVIEWPRESENTER_H

#include "IContentView.h"
#include "Content.h"

class ContentViewPresenter{

    private:
        IContentView* view;
        const Content* content;

    public:
        ContentViewPresenter(IContentView* view);
        void setContent(const Content* content);

};

#endif
