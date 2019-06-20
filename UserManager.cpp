#include "UserManager.h"
#include <iostream>

using namespace std;

UserManager::UserManager(int base)
{
	this->baseID=base;
}

void UserManager::addCustomer(Customer cust)
{
	this->custlist.insert({this->baseID+custlist.size()+1,cust});
}

Customer UserManager::getCustomer(int id)
{
	return this->custlist[id];
}

void UserManager::deleteCustomer(int id)
{
	this->custlist.erase(id);
}

void UserManager::addAdmin(Admin admin)
{
	this->adminlist.insert({this->baseID+adminlist.size()+1,admin});
}

Admin UserManager::getAdmin(int id)
{
	return this->adminlist[id];
}

void UserManager::deleteAdmin(int id)
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

	map<int, Admin>::iterator itA;
	map<int, Customer>::iterator itC;

	for (itA=adminlist.begin();itA != adminlist.end();itA++)
	{
		if (itA->second.getUsername() == username && itA->second.getPassword() == password)
		{
			setIsAuthenticated(true);
			setCurrentUser(username);
			return true;
		}
	}

	for (itC=custlist.begin();itC != custlist.end();itC++)
	{
		if (itC->second.getUsername() == username && itC->second.getPassword() == password)
		{
			setIsAuthenticated(true);z
			setCurrentUser(username);
			return true;
		}
	}

	return false;
}

void UserManager::setCurrentUser(string currentuser)
{
	this->currentUser = currentuser;
}

string UserManager::getCurrentUser()
{
	setIsAuthenticated(true);
	setCurrentUser(username);
	return this->currentUser;
}
