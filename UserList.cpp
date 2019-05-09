#include "UserList.h"
#include "Customer.h"
#include "Admin.h"
using namespace std;

UserList::UserList(unsigned long int base)
{
	this->baseID = base;
}

void UserList::addAdmin(Administrator admin)
{
	this->adminList.insert(pair<unsigned long int, Administrator>(this->baseID+this->adminList.size(),admin));
}
Administrator UserList::getAdmin(unsigned long int id)
{
	return this->adminList[id];
}
void UserList::deleteAdmin(unsigned long int id)
{
	this->adminList.erase(id);
}
void UserList::addCustomer(Customer customer)
{
	this->customerList.insert(pair<unsigned long int,Customer>(this->baseID+this->customerList.size(),customer));
}
Customer UserList::getCustomer(unsigned long int id)
{
	return this->customerList[id];
}
void UserList::deleteCustomer(unsigned long int id)
{
	this->customerList.erase(id);
}
