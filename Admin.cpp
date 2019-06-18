#include <iostream>
#include "Admin.h"

using namespace std;

Admin::Admin () {}

Admin::Admin(string fullname,string username,string password,int position)
: BaseUser(fullname, username, password)
{
	setFullname(fullname);
	setUsername(username);
	setPassword(password);
	setPosition(position);
	setIsAdmin(true);
}

void Admin::setPosition(int position_)
{
	this->position=position_;
}

int Admin::getPosition()
{
	return this->position;
}

void Admin::setIsAdmin(bool isAdmin)
{
	this->isAdmin = isAdmin;
}

bool Admin::getIsAdmin()
{
	return this->isAdmin;
}
