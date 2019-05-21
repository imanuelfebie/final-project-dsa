#include "Catalog.h"
#include <algorithm>
#include <iterator>
#include <iostream>

using namespace std;

void Catalog::productCreate(Product p)
{
    // Adding new product object at beginning of list
    catalog.push_back(p);
}

void Catalog::productDelete(string name)
{
    // auto it = std::find_if(catalog.begin(), catalog.end(),
    //                        [&name](Product& p) { return p.getName() == name; });
    
    // if (it != catalog.end())
    //     auto index = distance(catalog.begin(), it);
    //     cout << name;
    
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

void Catalog::productList()
{
   cout << "ID" << "\t" << "Name" << "\t" << "Price" << "\t" << "Stock" << endl << endl;
    
   for (it = catalog.begin();it != catalog.end(); it++)
   {
       // list out products
       cout << it->getId() << "\t" << it->getName() << "\t" << it->getPrice()
            << "\t" << it->getStock() << endl; 
   } 
}

// void Catalog::productUpdate() {}

// void Catalog::productDelete() {}

bool Catalog::productSearch(string name)
{   
    for (int i = 0;i < catalog.size();i++)
    {
        if (catalog[i].getName() == name)
        {
            return true;
            break;
        }
    }
} 





