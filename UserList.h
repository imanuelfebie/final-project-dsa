#ifndef USERLIST_H
#define USERLIST_H
#include "Customer.h"
#include "Admin.h"
#include "BaseUser.h"
#include "Customer.cpp"
#include "Admin.cpp"
#include "BaseUser.cpp"
#include <string>
#include <map>

class UserList
{
	private:
		std::map<unsigned long int, Customer> custlist;
		std::map<unsigned long int, Admin> adminlist;
		unsigned long int baseID;
	public:
		UserList(unsigned long int base);
		void addCustomer(Customer cust);
		Customer getCustomer(unsigned long int id);
		void deleteCustomer(unsigned long int id);
		void addAdmin(Admin admin);
		Admin getAdmin(unsigned long int id);
		void deleteAdmin(unsigned long int id);
		
};

#endif
