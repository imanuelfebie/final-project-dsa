#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <iostream>
#include "BaseUser.h"

class Customer : public BaseUser{
	
	// void setIsAdmin();
	
	private:
		std::string address;
		int age;
	
	public:
		Customer(std::string fullname,std::string username,std::string password);
		void setAddress(std::string address);
		std::string getAddress();
		void setAge(int age);
		int getAge();
};

#endif
