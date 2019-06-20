#ifndef USERMANAGER_H
#define USERMANAGER_H

#include "Customer.h"
#include "Admin.h"

#include <string>
#include <map>

class UserManager
{
	private:
		std::map<int, Customer> custlist;
		std::map<int, Admin> adminlist;
		int baseID;
		
		bool isAuthenticated;
		std::string currentUser;

	public:
		UserManager();
		UserManager(int base);

		// std::map(int, Admin) getAminList();

		void addCustomer(Customer cust);
		Customer getCustomer(int id);
		void deleteCustomer(int id);
		void addAdmin(Admin admin);
		Admin getAdmin(int id);

		void deleteAdmin(int id);

		void setIsAuthenticated(bool isAuthenticated);
		bool getIsAuthenticated();
		bool login(std::string username, std::string password);
		void logout();

		void setCurrentUser(std::string currentUser);
		std::string getCurrentUser();
};

#endif
