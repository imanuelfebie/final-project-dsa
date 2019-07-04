#include "headers/Customer.h"
#include <iostream>

using namespace std;

Customer::Customer() {}

Customer::Customer(string fullname,string username,string password)
: BaseUser(fullname, username, password)
{
	/**
	 * Constructor for the customer object
	 */
	setFullname(fullname);
	setPassword(password);
	setUsername(username);
	setIsAdmin(false);
}

void Customer::setIsAdmin(bool isAdmin)
{
	this->isAdmin = isAdmin;
}

bool Customer::getIsAdmin()
{
 	return this->isAdmin;
}

void Customer::setAddress(string address_)
{
	this->address=address_;
}

string Customer::getAddress()
{
	return this->address;
}

void Customer::setCity(string city)
{
	this->city = city;
}

string Customer::getCity()
{
	return this->city;
}

void Customer::setPostalCode(string postalCode)
{
	this->postalCode = postalCode;
}

string Customer::getPostalCode()
{
	return this->postalCode;
}

