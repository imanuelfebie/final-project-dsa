#ifndef USERLIST_H
#define USERLIST_H

#include "Customer.h"
#include "Admin.h"

#include <map>
#include <string>

class UserList
{
	private:
		std::map<unsigned long int,Customer> customerList;
		std::map<unsigned long int,Administrator> adminList;
		unsigned long int baseID;
	public:
		UserList(unsigned long int base);
		void addCustomer(Customer customer);
		Customer getCustomer(unsigned long int id);
		void deleteCustomer(unsigned long int id);
		void addAdmin(Administrator admin);
		Administrator getAdmin(unsigned long int id);
		void deleteAdmin(unsigned long int id);
		
};

#endif
