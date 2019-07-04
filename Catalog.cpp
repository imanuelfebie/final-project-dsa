#include "headers/Catalog.h"
#include <algorithm>
#include <iterator>
#include <iostream>

using namespace std;

vector<Product> Catalog::getCatalog()
{
    return this->catalog;
}

bool Catalog::productCreateController(string name, string description, float price, int stock)
{   
    /* Create new Product object */
    Product product(name, description, price, stock);
    /* Push back new Product object to end of vector */
    catalog.push_back(product);
}

void Catalog::productDeleteController(int id)
{

    // for (int i = 0;i < catalog.size();i++)
    // {
    //     if (catalog[i].getId() == id)
    //     {
    //         catalog.erase(catalog.begin() + i);
    //         cout << "Successful deleted";
    //     } else {
    //         cout << id << " does not exist" << endl;
    //     }
    // }
}

void Catalog::productUpdate(int id)
{   
}

bool Catalog::productBoolSearch(string &name)
{   
    for (Product &p : catalog)
    {
        if (p.getName() == name)
            return true;
    }
}






