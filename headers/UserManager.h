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
		
		bool isAuthenticated;
		Customer currentCustomer;
		Admin currentAdmin;
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

		void addCustomer(Customer cust);
		void deleteCustomer(int id);
		
		bool createAdminController(std::string name, std::string usernamer, std::string password);
		// void addAdmin(Admin admin);
		void deleteAdmin(int id);
		
		bool customerLogin(std::string username, std::string password);
		bool adminLogin(std::string username, std::string password);
		void logout();
};

#endif
