#ifndef USERMANAGER_H
#define USERMANAGER_H

// #include <Admin.h>
#include "Customer.h"
#include "Auth.h"
#include <vector>
#include <string>

class UserManager
{
    private:
        std::vector<Customer> customers;
        std::vector<Auth> sessions;

    public:
        Auth getSession(bool isAuthenticated, std::string user);
        void newSession(Auth a);

        void createCustomer(Customer c);

        bool login(std::string username, std::string password);
        void logout();

        // void getCurrentUser();

        std::vector<Customer> getCustomers();
        std::vector<Auth> getSession();
};

#endif
