#include "Session.h"

#include <string>
#include <iostream>

using namespace std;

Session::Session() 
{ }

Session::Session(bool isAuthenticated, string currentUser)
{
    setIsAuthenticated(isAuthenticated);
    setCurrentUser(currentUser);
}


void Session::setIsAuthenticated(bool isAuthenticated)
{
    this->isAuthenticated = isAuthenticated;
}

bool Session::getIsAuthenticated()
{
    return this->isAuthenticated;
}

void Session::setCurrentUser(string currentUser)
{
    this->currentUser = currentUser;
}

string Session::getCurrentUser()
{
    return this->getCurrentUser();
}