#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>

#include "BaseUser.h"
#include "ShoppingCart.h"
#include <map>

class Customer : public BaseUser
{
	/**
	 * Prototype for the Customer model
	 */
	
	private:
		std::string address;
		std::string city;
		std::string postalCode;

	public:
		Customer();
		Customer(std::string fullname, std::string username, std::string password);

		void setIsAdmin(bool isAdmin);
		bool getIsAdmin();

		void setAddress(std::string address_);
		std::string getAddress();

		void setCity(std::string city);
		std::string getCity();

		void setPostalCode(std::string postalCode);
		std::string getPostalCode();
};

#endif
