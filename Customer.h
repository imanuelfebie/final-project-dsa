#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "BaseUser.h"
#include <vector>

class Customer : public BaseUser
{	
	/**
	 * Customer model : inherits from Abstract Base User class
	 * 
	 */
	private:
		std::vector<Customer> customers;
		std::string address;
		std::string city;
		std::string postalCode;
		int age;
	
	public:
		Customer();
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

		std::vector<Customer> get(); // return the vector of customers
};

#endif
