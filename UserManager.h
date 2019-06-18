#ifndef USERMANAGER_H
#define USERMANAGER_H

#include "Customer.h"
#include "Admin.h"

#include <string>
#include <map>

class UserManager
{
	private:
		std::map<unsigned long int, Customer> custlist;
		std::map<unsigned long int, Admin> adminlist;
		unsigned long int baseID;

		bool isAuthenticated;
		std::string currentUser;

	public:
		UserManager(unsigned long int base);

		// std::map(unsigned long int, Admin) getAminList();

		void addCustomer(Customer cust);
		Customer getCustomer(unsigned long int id);
		void deleteCustomer(unsigned long int id);
		void addAdmin(Admin admin);
		Admin getAdmin(unsigned long int id);

		void deleteAdmin(unsigned long int id);

		void setIsAuthenticated(bool isAuthenticated);
		bool getIsAuthenticated();
		bool login(std::string username, std::string password);
		void logout();

		void setCurrentUser(std::string currentUser);
		std::string getCurrentUser();
};

#endif
