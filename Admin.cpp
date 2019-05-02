#include "Admin.h"
#include <string>
using namespace std;

void Administrator::setIsAdmin()
{
	this->isAdmin = true;
}
Administrator::Administrator(string fullname,string username,string password) 
{
	setFullname(fullname);
	setUsername(username);
	setPassword(password);
	setIsAdmin();
}
