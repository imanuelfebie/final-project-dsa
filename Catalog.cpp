#include "Catalog.h"
#include <algorithm>
#include <iterator>
#include <iostream>

using namespace std;

vector<Product> Catalog::getCatalog()
{
    return this->catalog;
}

void Catalog::productCreate(Product p)
{
    // Adding new product object at beginning of list
    catalog.push_back(p);
}

void Catalog::productDelete(string name)
{   
    for (int i = 0;i < catalog.size();i++)
    {
        if (catalog[i].getName() == name)
        {
            catalog.erase(catalog.begin() + i);
            cout << "Successfull deleted";
        } else {
            cout << name << " does not exist" << endl;
        }
    }
}

void Catalog::productUpdate(string &name)
{   
    float newPrice;

    for (int i = 0;i < catalog.size();i++)
    {
        if (catalog.at(i).getName() == name)
        {
            printf("Set new price for %s : ",
                    catalog.at(i).getName().c_str());
            cin >> newPrice;
            
            catalog.at(i).setPrice(newPrice);
        }
    } 
}

void Catalog::productList()
{
    // Displaying the products if there is atleast 1 product
    if (catalog.size() > 0) 
        cout << "ID" << "\t" << "Name" << "\t" << "Price" << "\t" << "Stock" << endl << endl;
        
        for (it = catalog.begin();it != catalog.end(); it++)
        {
            // list out products
            cout << it->getId() << "\t" << it->getName() << "\t" << it->getPrice()
                << "\t" << it->getStock() << endl; 
        } 
}

bool Catalog::productSearch(string name)
{   
    // Perform a simple linear search 
    for (int i = 0;i < catalog.size();i++)
    {
        if (catalog.at(i).getName() == name)
        {
            return true;
            break;
        }
    }
}





