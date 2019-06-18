#include "UserManager.h"
#include <iostream>

using namespace std;

UserManager::UserManager(unsigned long int base)
{
	this->baseID=base;
}

void UserManager::addCustomer(Customer cust)
{
	this->custlist.insert({this->baseID+custlist.size()+1,cust});
}

Customer UserManager::getCustomer(unsigned long int id)
{
	return this->custlist[id];
}

void UserManager::deleteCustomer(unsigned long int id)
{
	this->custlist.erase(id);
}

void UserManager::addAdmin(Admin admin)
{
	this->adminlist.insert({this->baseID+adminlist.size()+1,admin});
}

Admin UserManager::getAdmin(unsigned long int id)
{
	return this->adminlist[id];
}

void UserManager::deleteAdmin(unsigned long int id)
{
	this->adminlist.erase(id);
}

void UserManager::setIsAuthenticated(bool isAuthenticated)
{
	this->isAuthenticated = isAuthenticated;
}

bool UserManager::getIsAuthenticated()
{
	return this->isAuthenticated;
}

/**
 * Authencitcation stuff
 */



bool UserManager::login(string username, string password)
{
	/**
	 * Loop through admin map
	 */
}

void UserManager::setCurrentUser(string currentuser)
{
	this->currentUser = currentuser;
}

string UserManager::getCurrentUser()
{
	return this->currentUser;
}
