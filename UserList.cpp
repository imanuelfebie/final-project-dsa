#include "UserList.h"

using namespace std;

UserList::UserList(unsigned long int base)
{
	this->baseID=base;
}
void UserList::addCustomer(Customer& cust)
{	
	unsigned long int newid=this->baseID+this->custlist.size();
	this->custlist[newid]=cust;
}
Customer UserList::getCustomer(unsigned long int id)
{
	return this->custlist[id];
}
void UserList::deleteCustomer(unsigned long int id)
{
	this->custlist.erase(id);
}
void UserList::addAdmin(Administrator& admin)
{	
	unsigned long int newid=this->baseID+this->adminlist.size();
	this->adminlist[newid]=admin;
}
Administrator UserList::getAdmin(unsigned long int id)
{
	return this->adminlist[id];
}
void UserList::deleteAdmin(unsigned long int id)
{
	this->adminlist.erase(id);
}

