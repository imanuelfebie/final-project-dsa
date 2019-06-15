#include "UserManager.h"
#include <iostream>

using namespace std;

Auth UserManager::getSession(bool isAuthenticated, string user)
{
    // Create session object
    return Auth(isAuthenticated, user);
}

void UserManager::newSession(Auth a)
{
    // Store session in vector
    sessions.push_back(a);
}

bool UserManager::login(string username, string password)
{
    for (Customer c : customers)
    {
        if (c.getUsername() == username)
        {
            if (c.getPassword() == password)
            {
                // Start new Session
                newSession(getSession(true, username));
                return true;
            }
        }
    }
}

void UserManager::createCustomer(Customer c)
{
    customers.push_back(c);
}

vector<Auth> UserManager::getSession()
{
    return this->sessions;
}
