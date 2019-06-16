#include "UserManager.h"
#include <iostream>

using namespace std;

Customer UserManager::getCustomer()
{
    return this->customer;
}

AnonymousUser UserManager::getAnonymousUser()
{
    return this->anonymousUser;
}

Session UserManager::getCurrentSession()
{
    return this->currentSession;
}

void UserManager::createCustomer(Customer customer)
{
    /**
     * Pushes new Customer object to vector
     */

    customer.get().push_back(customer);
}

Session UserManager::startSession(bool authenticate, string currentUser)
{
    return Session(authenticate, currentUser);
}

bool UserManager::login(string username, string password)
{
    /**
     * If the user exist and the password is correct session will start.
     * 
     */
    for (Customer c : customer.get())
    {
        if (c.getUsername() == username)
        {
            if (c.getPassword() == password)
            {
                currentSession.setIsAuthenticated(true);
                return true;           
            }
        }
    }           
}