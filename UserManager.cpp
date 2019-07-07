#include "headers/UserManager.h"

#include <iostream>

using namespace std;

UserManager::UserManager() {};

/**
 * Admin Controllers
 */

bool UserManager::createAdminController(string name, string username, string password)
{	
	/* Create new Admin object and insert into map */

	this->adminlist.insert(
				std::make_pair(++adminIdCounter, 
				Admin(name, username, password))
			);
}

bool UserManager::adminLoginController(string username, string password)
{	
	/* Admin authentication */

	map<int, Admin>::iterator it; /* Iterator */

	for (it=adminlist.begin();it != adminlist.end();it++)
	{
		if (it->second.getUsername() == username && it->second.getPassword() == password) {
			setIsAuthenticated(true);
			setCurrentAdmin(it->second); /* Current user will set to this admin object */
			return true;
		}
	}
	return false;
}

bool UserManager::createCustomerController(string name, string username, string password)
{
	/* Creates a new Customer and inserts into map*/

	this->custlist.insert(
		std::make_pair(++customerIdCounter,
		Customer(name, username, password))
	);
}

bool UserManager::customerLoginController(string username, string password)
{
	map<int, Customer>::iterator it; /* Iterator */

	for (it=custlist.begin();it != custlist.end();it++)
	{
		if (it->second.getUsername() == username && it->second.getPassword() == password) {
			setIsAuthenticated(true);
			setCurrentCustomer(it->second); /* Current user will set to this admin object */
			return true;
		}
	}
	return false;
}




bool UserManager::logout()
{	
	/**
	 * Logging user out
	 */
	setIsAuthenticated(false);
}


void UserManager::setIsAuthenticated(bool isAuthenticated)
{
	this->isAuthenticated = isAuthenticated;
}

bool UserManager::getIsAuthenticated()
{
	return this->isAuthenticated;
}

void UserManager::setCurrentCustomer(Customer currentCustomer)
{
	this->currentCustomer = currentCustomer;
}

Customer UserManager::getCurrentCustomer()
{
	return this->currentCustomer;
}

void UserManager::setCurrentAdmin(Admin currentAdmin)
{
	this->currentAdmin = currentAdmin;
}

Admin UserManager::getCurrentAdmin()
{
	return this->currentAdmin;
}

string UserManager::getCurrentAdminName()
{
	return getCurrentAdmin().getFullname();
}

string UserManager::getCurrentCustomerName()
{
	return getCurrentCustomer().getFullname();
}













