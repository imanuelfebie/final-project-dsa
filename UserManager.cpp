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

bool UserManager::adminLogin(string username, string password)
{	
	/* Admin authentication */

	map<int, Admin>::iterator A; /* Iterator */

	for (A=adminlist.begin();A != adminlist.end();A++)
	{
		if (A->second.getUsername() == username && A->second.getPassword() == password) {
			setIsAuthenticated(true);
			setCurrentAdmin(A->second); /* Current user will set to this admin object */
			return true;
		}
	}
}

// void UserManager::addAdmin(Admin admin) 
// {
// 	/**
// 	 * Adding new admin to the admin map with an int start from 1 as the key
// 	 * int auto increments witch each new admin
// 	 */

// 	this->adminlist.insert({this->baseID+adminlist.size()+1, admin});
// }


/**
 * Custumer COntrollers
 */


// void UserManager::addCustomer(Customer cust)
// {
// 	this->custlist.insert({this->baseID+custlist.size()+1,cust});
// }

// void UserManager::deleteCustomer(int id)
// {
// 	this->custlist.erase(id);
// }

// void UserManager::deleteAdmin(int id)
// {
// 	this->adminlist.erase(id);
// }

// bool UserManager::customerLogin(string username, string password)
// {
// 	/**
// 	 * Function that return true if either the Admin or Customer object exists in the adminList map or custList map.
// 	 */
// 	map<int, Customer>::iterator itC;

// 	for (itC=custlist.begin();itC != custlist.end();itC++)
// 	{
// 		if (itC->second.getUsername() == username && itC->second.getPassword() == password)
// 		{	
// 			setIsAuthenticated(true);
// 			return true;
// 		}
// 	}

// 	return false;
// }



void UserManager::logout()
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













