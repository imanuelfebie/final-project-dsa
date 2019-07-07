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


bool Catalog::productDeleteController(int id, Catalog c)
{   
    
    for (int i = 0 ; i < c.getCatalog().size() ; ++i) 
    {
        if (c.getCatalog().at(i).getId() == id) {
            c.getCatalog().erase(c.getCatalog().begin() + i);
        }
    }

    return false;
}

bool Catalog::productSearchController(string name)
{
    vector<Product>::iterator it;

    
}






