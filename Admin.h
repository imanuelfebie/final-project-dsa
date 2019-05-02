#ifndef ADMIN_H
#define ADMIN_H
#include "BaseUser.h"

class Administrator:public BaseUser
{
	void setIsAdmin();
	public:
		Administrator(std::string fullname, std::string username, std::string password);
};

#endif
