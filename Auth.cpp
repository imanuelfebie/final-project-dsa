#include "Auth.h"

#include <iostream>

using namespace std;

Auth::Auth(bool isAuthenticated, string username)
{
    setIsAuthenticated(isAuthenticated);
    setCurrentUser(username);
}

void Auth::setIsAuthenticated(bool isAuthenticated)
{
    this->isAuthenticated = isAuthenticated;
}

bool Auth::getIsAuthenticated()
{
    return this->isAuthenticated;
}

void Auth::setCurrentUser(string currentUser)
{
    this->currentUser = currentUser;
}

string Auth::getCurrentUser()
{
    return this->currentUser;
}

