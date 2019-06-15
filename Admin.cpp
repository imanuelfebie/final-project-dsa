#include "Admin.h"
#include <string>

using namespace std;

Administrator::Administrator(string fullname,string username,string password) 
{
	setFullname(fullname);
	setUsername(username);
	setPassword(password);
	setIsAdmin(true);
}

void Administrator::setIsAdmin(bool isAdmin)
{
	this->isAdmin = isAdmin;
}
