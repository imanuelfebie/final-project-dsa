#ifndef ADMIN_H
#define ADMIN_H
#include <iostream>
#include "BaseUser.h"

class Admin:public BaseUser
{
	public:
		Admin();
		Admin(std::string fullname,std::string username,std::string password);
		
		void setIsAdmin(bool isAdmin);
		bool getIsAdmin();
};

#endif
