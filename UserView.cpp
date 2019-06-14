#include "UserManager.h"
#include <iostream>

using namespace std;

class UserView
{
    private:
        UserManager manager;

    public:
        void start()
        {
            manager.registerCustomer(createCustomerView());
        }

        Customer createCustomerView()
        {
            string fullname, username, password, address, 
                   city, postalCode;
            int age;

            system("clear");

            cout << "New Customer" << endl;
            cout << "----------------------" << endl;
            
            cout << "Fullname: ";
            cin >> fullname;

            cout << "Username: ";
            cin >> username;

            cout << "Password";
            cin >> password;

            cout << "Address: ";
            cin >> address;

            cout << "City: ";
            cin >> city;

            cout << "postalCode: "; 
            cin >> postalCode;

            cout << "Age: ";
            cin >> age;

            return Customer(fullname, username, password, address, city, postalCode, age);
        } 
};