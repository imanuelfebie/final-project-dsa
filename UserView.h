#ifndef USERVIEW_H
#define USERVIEW_H

// #include "Auth.h"
// #include "Customer.h"
#include "UserManager.h"

class UserView
{
    private:
        UserManager manager;
        
    public:
        void start();
        // void displayUserName();
        void loginView();
        void customerListview();
        void testHomeView();
        Customer createCustomerView();
};

#endif