#include "headers/AdminView.h"
#include "headers/CatalogView.h"
#include "headers/HomeView.h"

#include <iostream>

using namespace std;

AdminView *AdminView::singleAdminView = NULL;

AdminView *AdminView::getAdminView()
{
    /**
     * Create new unique instance if one does not exit yet
     * and return 
     */

    if (!singleAdminView)
        singleAdminView = new AdminView;
    
    return singleAdminView;
}

void AdminView::viewHeading(string title)
{
    clearScreen();
    
    cout << "E-Commerce Simulator" << endl << endl;

    if (userManager.getIsAuthenticated() && userManager.getCurrentAdmin().getIsAdmin()) {
        /* Welcomes admin after successfull authentication */
        cout << "Welcome " << userManager.getCurrentAdmin().getFullname() << " - Admin Dashboard" << endl << endl;
        cout << "Total inventory: " << endl;
    }

    cout << title << endl << endl;
}

void AdminView::adminDashboardView() 
{
    /**
     * Dashboard view for admins. 
     */

    viewHeading("Welcome back");

    cout << "[1] Inventory Management" << endl
         << "[2] Order Management" << endl
         << "[3] Customer Overview" << endl
         << "[0] Logout" << endl << endl
         << ">> ";
    cin >> choice;

    switch (choice) {
        case 0:
            userManager.logout();
            /* If input 0: logout user and go back to homeView */
            HomeView::getHomeView()->homeView();
            break;
        case 1:
            /* If input 1: call inventoryManagementView */
            CatalogView::getCatalogView()->inventoryManagementView();
        default:
            /* Safeguard: any other input besides the choices above will let the user stay on the adminDashboardView */
            adminDashboardView();
            break;
    }
}

void AdminView::adminRegistrationView()
{
    /**
     * View to create new Admin object.
     * User input is received by createAdminController
     */

    viewHeading("Register Admin");

    string fullname, username, password;

    do {
        
        cout << "Enter fullname: ";
        cin.ignore();
        getline(cin, fullname);

        cout << "Enter username: ";
        cin >> username;
        cin.ignore();

        cout << "Create password: ";
        cin >> password;

        if (userManager.createAdminController(fullname, username, password)) {
            adminLoginView();
        }

    } while (!userManager.createAdminController(fullname, username, password));
}

void AdminView::adminLoginView()
{
    /**
     * Login view for admins. Username and password is checked by the adminLogin controller
     */
    
    viewHeading("Admin login");

    string username, password;

    do {

        cout << "Username: ";
        cin >> username;

        cout << "Password: ";
        cin >> password;

        if (userManager.adminLogin(username, password)) {
            adminDashboardView();
            break;
        } 

    } while (!userManager.adminLogin(username, password));

}