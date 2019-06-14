#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "BaseUser.h"

class Customer : public BaseUser
{	
	private:
		std::string address;
		std::string city;
		std::string postalCode;
		int age;
	
	public:
		
		Customer(std::string fullname, std::string username, std::string password,					 std::string address, std::string city, std::string postalCode,
				 int age);

		void setIsAdmin(bool isAdmin);

		void setAddress(std::string address);
		std::string getAddress();

		void setCity(std::string city);
		std::string getCity();

		void setPostalCode(std::string postalCode);
		std::string getPostalCode();

		void setAge(int age);
		int getAge();
};

#endif
