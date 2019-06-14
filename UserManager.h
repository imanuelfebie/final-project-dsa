#ifndef USERMANAGER_H
#define USERMANAGER_H

// #include <Admin.h>
#include "Customer.h"
#include <vector>

class UserManager
{
    private:
        std::vector<Customer> customers;
        // std::vector<Administrator> admins;

    public:
        void registerCustomer(Customer);
        void customerList();
};

#endif
