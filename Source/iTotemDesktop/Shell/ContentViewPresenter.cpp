#include "ContentViewPresenter.h"
#include "IContentView.h"
#include "Content.h"

ContentViewPresenter::ContentViewPresenter(IContentView* view): view(view), content(nullptr){

}

void ContentViewPresenter::setContent(const Content* content){
    this->content=content;
    this->view->setContentName(content->getName());
}


