#ifndef HOMEVIEW
#define HOMEVIEW

#include "BaseView.h"

class HomeView : public BaseView
{
    private:
        static HomeView *singleHomeView;

    public:
        static HomeView *getHomeView();
        void viewHeading(std::string title);
        void homeView();
};

#endif