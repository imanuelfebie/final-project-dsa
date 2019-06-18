#ifndef ADMIN_H
#define ADMIN_H
#include <iostream>
#include "BaseUser.h"

class Admin:public BaseUser
{
	private:
		int position;
	public:
		Admin(){};
		Admin(std::string fullname,std::string username,std::string password,int position);
		void setIsAdmin();
		void setPosition(int position_);
		int getPosition();
		bool getIsAdmin();
};

#endif
