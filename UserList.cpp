#include <iostream>
#include "UserList.h"

using namespace std;

UserList::UserList(unsigned long int base)
{
	this->baseID=base;
}
void UserList::addCustomer(Customer cust)
{
	this->custlist.insert({this->baseID+custlist.size()+1,cust});
}
Customer UserList::getCustomer(unsigned long int id)
{
	return this->custlist[id];
}
void UserList::deleteCustomer(unsigned long int id)
{
	this->custlist.erase(id);
}
void UserList::addAdmin(Admin admin)
{
	this->adminlist.insert({this->baseID+adminlist.size()+1,admin});
}
Admin UserList::getAdmin(unsigned long int id)
{
	return this->adminlist[id];
}
void UserList::deleteAdmin(unsigned long int id)
{
	this->adminlist.erase(id);
}
