#ifndef ADMIN_H
#define ADMIN_H

#include "BaseUser.h"

class Administrator : public BaseUser
{
	public:
		Administrator();
		Administrator(std::string fullname, std::string username, std::string password);

		void setIsAdmin(bool isAdmin);	
};

#endif
