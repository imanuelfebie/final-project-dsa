#ifndef ADMINVIEW_H
#define ADMINVIEW_H

#include "BaseView.h"

class AdminView : public BaseView
{

    private:
        static AdminView* singleAdminView; // Single instance of AdminView

    public:
        static AdminView* getAdminView();
        void viewHeading(std::string);
        void adminRegistrationView();
        void adminLoginView();
        void adminDashboardView();

};

#endif
