#include <iostream>
#include "Customer.h"
using namespace std;

Customer::Customer(string fullname,string username,string password,string address,int age)
{
	setFullname(fullname);
	setPassword(password);
	setUsername(username);
	setAddress(address);
	setAge(age);
	setIsAdmin();
}
void Customer::setAddress(string address_)
{
	this->address=address_;
}
void Customer::setAge(int age_)
{
	this->age=age_;
}
void Customer::setIsAdmin()
{
	this->isAdmin= false;
}
string Customer::getAddress()
{
	return this->address;
}
int Customer::getAge()
{
	return this->age;
 } 
 bool Customer::getIsAdmin()
 {
 	return this->isAdmin;
 }
