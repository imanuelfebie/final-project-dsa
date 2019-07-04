#ifndef BASEVIEW_H
#define BASEVIEW_H

#include "UserManager.h"
#include "Catalog.h"

class BaseView
{
    /**
     * An abstract BaseView acting as a blueprint for the other Views
     */

    protected:
        UserManager userManager;
        Catalog catalog;
        int choice;
    
    public:
        void clearScreen();
        virtual void viewHeading(std::string) = 0; /* Each class view inheriting from the baseView can implement this to their own need */
};

#endif