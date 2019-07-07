#ifndef USERMANAGER_H
#define USERMANAGER_H

#include "Customer.h"
#include "Admin.h"

#include <string>
#include <map>

class UserManager
{
	private:
		// Admin admin;

		Customer customer;
		std::map<int, Customer> custlist;
		std::map<int, Admin> adminlist;
		int adminIdCounter = 0;
		int customerIdCounter = 0;
		
		bool isAuthenticated = false;
		Customer currentCustomer;
		Admin currentAdmin;

		std::string currentAdminName();
		std::string currentCustomerName();


	public:
		UserManager();

		int getAdminIdCounter();
		// int getCustomerIdCounter();
		void setIsAuthenticated(bool isAuthenticated);
		bool getIsAuthenticated();

		void setCurrentCustomer(Customer currentCustomer);
		Customer getCurrentCustomer();

		void setCurrentAdmin(Admin currentAdmin);
		Admin getCurrentAdmin();

		std::string getCurrentAdminName();
		std::string getCurrentCustomerName();
		
		bool createCustomerController(std::string name, std::string username, std::string password);

		bool createAdminController(std::string name, std::string username, std::string password);
		
		bool customerLoginController(std::string username, std::string password);
		bool adminLoginController(std::string username, std::string password);
		bool logout();
};

#endif
