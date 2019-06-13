#include "UserManager.h"
#include <iostream>

Customer UserManager::registerCustomer(Customer &c)
{
    customers.push_back(c);
}