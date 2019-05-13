#include "Customer.h"
#include <string>
using namespace std;

void Customer::setIsAdmin()
{
	this->isAdmin = false;
}
Customer::Customer(string fullname,string username,string password) 
{
	setFullname(fullname);
	setUsername(username);
	setPassword(password);
	setIsAdmin();
}
void Customer::setAddress(string address)
{
	this->address=address;
}
string Customer::getAddress()
{
	return this->address;
}
void Customer::setAge(int age)
{
	this->age=age;
}
int Customer::getAge()
{
	return this->age;
}
