#ifndef CUSTOMER_H
#define CUSTOMER_H
#include "BaseUser.h"


class Customer:public BaseUser
{
	private:
		std::string address;
		int age;
	public:
		void setAddress(std::string address);
		std::string getAddress();
		void setAge(int age);
		int getAge();
};


#endif
