#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <iostream>
#include "BaseUser.h"
class Customer: public BaseUser{
	
	private:
		std::string address;
		int age;
	public:
		Customer(){};
		Customer(std::string fullname,std::string username,std::string password,std::string address,int age);
		void setAddress(std::string address_);
		std::string getAddress();
		void setAge(int age_);
		int getAge();
		void setIsAdmin();
		bool getIsAdmin();
};

#endif
