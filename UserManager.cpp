#include "UserManager.h"
#include <iostream>

using namespace std;

bool UserManager::loginManager(string username, string password)
{
    // Checks if username exist and the password is equal.
    for (Customer c : customers)
    {
        if (c.getUsername() == username) {
            if (c.getPassword() == password) {
                return true;
            } 
        } 

        cout << "Username or password is incorrect." << endl;
    }
}

void UserManager::registerCustomer(Customer c)
{
    customers.push_back(c);
}

void UserManager::customerList()
{
    for (Customer c : customers)
    {
        cout << "Name: "  << c.getFullname() << endl;
        cout << "Username: " << c.getUsername() << endl;
    }
}