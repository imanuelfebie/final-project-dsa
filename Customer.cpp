#include "Customer.h"

#include <string>

using namespace std;

Customer::Customer(string fullname, string username, string password,
				   string address, string city, string postalCode,
				   int age) : BaseUser::BaseUser(fullname, username, password)
{
	setAddress(address);
	setCity(address);
	setPostalCode(postalCode);
	setAge(age);
	setIsAdmin(false); // Customer by default is not a
}

void Customer::setIsAdmin(bool isAdmin)
{
	this->isAdmin = isAdmin;	
}

void Customer::setAddress(string address)
{
	this->address = address;
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

void Customer::setPostalCode(string PostalCode)
{
	this->postalCode = postalCode;
}

string Customer::getPostalCode()
{
	return this->postalCode;
}

void Customer::setAge(int age)
{
	this->age = age;
}

int Customer::getAge()
{
	return this->age;
}
