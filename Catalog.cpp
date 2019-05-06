#include "Catalog.h"
#include <algorithm>
#include <iostream>

using namespace std;

void Catalog::createProduct(Product p)
{
    catalog.push_back(p);
}

void Catalog::listProduct()
{
    // Displaying the product
    int i;

    for (i=0;i<catalog.size();i++) {
        cout << catalog[i].getName() << endl;
        cout << catalog[i].getDescription() << endl;
        cout << catalog[i].getPrice() << endl;
        cout << catalog[i].getStock() << endl;
    }
}

//TODO: FInd way to have iterator use product
// void Catalog::searchProduct(string name)
// {    
//     // using binary search
//     if (binary_search(catalog.begin(), catalog.end(), name))
//     {
//         cout << name << " found" << endl;
//     } else {
//         cout << name << " not found" << endl;
//     }
// }

