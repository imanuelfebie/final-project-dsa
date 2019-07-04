#include "headers/CatalogView.h"
#include "headers/AdminView.h"

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

CatalogView *CatalogView::singleCatalogView = NULL;

CatalogView *CatalogView::getCatalogView()
{
    /**
     * Create new unique instance if one does not exit yet
     * and return 
     */
    
    if (!singleCatalogView)
        singleCatalogView = new CatalogView;

    return singleCatalogView;
}

void CatalogView::viewHeading(string title)
{
    clearScreen();

    cout << title << endl << endl;
}

void CatalogView::inventoryManagementView()
{
    /**
     * View to start managing the products/inventory
     */
    AdminView::getAdminView()->viewHeading("Inventory Management");

    cout << "[1] Add Product" << endl
         << "[2] Delete Product" << endl
         << "[3] Update Product" << endl
         << "[4] Catalog" << endl
         << "[0] Return to Dashboard" << endl << endl
         << ">> ";
    
    while (!(cin >> choice))
    {
        cout << "Oops! Please input a number.." << endl;
        cin.clear();
        cin.ignore();
        cout << ">> ";
    }

    switch (choice)
    {   
        case 0:
            AdminView::getAdminView()->adminDashboardView();
            break;
        case 1:
            productCreateView();
            break;
        default:
            inventoryManagementView();
            break;
    }
}

void CatalogView::productCreateView()
{
    /**
     * View to add new Product object
     */

    AdminView::getAdminView()->viewHeading("Inventory Management");

    string name, description;
    float price;
    int stock;

    cout << "Product name: ";
    cin.ignore();
    getline(cin, name);

    cout << "Product decription: ";
    getline(cin, description);

    cout << "Product price: ";
    
    while(!(cin >> price))
    {
        cout << "Oops! Please enter number";
        cin.clear();    // clear previous input
        cin.ignore();   // discard previous input 
    }

    cout << "Stock/Inventory: ";

    while (!(cin >> stock))
    {
        cout << "Oops! Please enter number";
        cin.clear();    // clear previous input
        cin.ignore();   // discard previous input 
    }

    if (catalog.productCreateController(name, description, price, stock)) {
        cout << "Product " << name << " has been added. Do you want to add another one? (Y/n) ";

    }
}