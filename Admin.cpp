#include <iostream>
#include "Admin.h"
using namespace std;
Admin::Admin(string fullname,string username,string password,int position)
{
	setFullname(fullname);
	setUsername(username);
	setPassword(password);
	setPosition(position);
	setIsAdmin();
}
void Admin::setPosition(int position_)
{
	this->position=position_;
}
int Admin::getPosition()
{
	return this->position;
}
void Admin::setIsAdmin()
{
	this->isAdmin=true;
}
bool Admin::getIsAdmin()
{
	return this->isAdmin;
}
