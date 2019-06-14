#include "UserManager.h"
#include <iostream>

using namespace std;

void UserManager::registerCustomer(Customer &c)
{
    customers.push_back(c);
}

void UserManager::customerList()
{
    for (Customer &c : customers)
        cout << c.getFullname();
}