#ifndef USERLIST_H
#define USERLIST_H

#include "Customer.h"
#include "Admin.h"

#include <map>

class UserList
{
	private:
		std::map<unsigned long int, Customer> custlist;
		std::map<unsigned long int, Administrator> adminlist;
		unsigned long int baseID;
	public:
		UserList(unsigned long int base);
		void addCustomer(Customer& cust);
		Customer getCustomer(unsigned long int id);
		void deleteCustomer(unsigned long int id);
		void addAdmin(Administrator& admin);
		Administrator getAdmin(unsigned long int id);
		void deleteAdmin(unsigned long int id);
		
};

#endif
