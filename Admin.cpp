#include <iostream>
#include "headers/Admin.h"

using namespace std;

Admin::Admin () {}

Admin::Admin(string fullname,string username,string password)
: BaseUser(fullname, username, password)
{
	setFullname(fullname);
	setUsername(username);
	setPassword(password);
	setIsAdmin(true);
}

void Admin::setIsAdmin(bool isAdmin)
{
	this->isAdmin = isAdmin;
}

bool Admin::getIsAdmin()
{
	return this->isAdmin;
}
