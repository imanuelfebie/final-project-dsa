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

    for (Product &p : catalog)
    {
        if (p.getName() == name)
        {
            printf("Set price for %s : ", p.getName().c_str());
            cin >> newPrice;

            p.setPrice(newPrice);
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

bool Catalog::productBoolSearch(string &name)
{   
    for (Product &p : catalog)
    {
        if (p.getName() == name)
            return true;
    }
}

Product Catalog::getObject(string name)
{
    /**
     * The getObject() method return the actual object when it is called. This is handy when in the view we want to get access to the object attributes.
     */
    for (Product &p : catalog)
    {
        if (p.getName() == name)
            return p;
    }
}







