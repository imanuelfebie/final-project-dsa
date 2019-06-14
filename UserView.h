#ifndef USERVIEW_H
#define USERVIEW_H

#include "UserManager.h"

class UserView
{
    private:
        UserManager manager;

    public:
        void start();
        void loginView();
        Customer createCustomerView();
};

#endif