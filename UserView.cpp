#include "UserView.h"
#include <iostream>

using namespace std;

void UserView::start()
{
    int choice;

    while (choice != 0)
    {
        cout << "[1] Login" << endl;
        cout << "[2] New Customer" << endl << endl;
        cout << "ChOICE : ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                loginView();
                break;
            case 2:
                manager.createCustomer(createCustomerView());
                break;
            case 0:
                break;
        }
    }
}

void UserView::loginView()
{
    string username, password;
    
    system("clear");

    cout << "Username: ";
    cin >> username;

    cout << "Password: " ;
    cin >> password;

    system("clear");

    if (manager.login(username, password)) 
        cout << "Successfull login";
}

Customer UserView::createCustomerView()
{
    string fullname, username, password, address, city, postalCode;
    int age;

    system("clear");

    cout << "New Customer" << endl;
    cout << "----------------------" << endl;
    
    cout << "Fullname: ";
    cin >> fullname;

    cout << "Username: ";
    cin >> username;

    cout << "Password: ";
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