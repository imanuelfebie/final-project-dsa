#include "Catalog.h"
#include <algorithm>
#include <iterator>
#include <iostream>

using namespace std;

void Catalog::createProduct(Product p)
{
    // Adding new product object at beginning of list
    catalog.push_front(p);
}

void Catalog::listProduct() 
{
    // Using an iterator for the stl list
    list<Product>::iterator it;

    for (it = catalog.begin();it != catalog.end();it++)
    {
        // Displaying product details
        cout << "---------------------------------------" << endl;
        cout << it->getId();
        cout << it->getName() << endl;
        cout << it->getDescription() << endl;
        cout << "$ " << it->getPrice() << endl;
        cout << "STOCK " << it->getStock() << endl;
        cout << endl;
    }

}


