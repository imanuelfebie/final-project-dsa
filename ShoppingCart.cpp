#include "ShoppingCart.h"
#include <iostream>

using namespace std;

void ShoppingCart::cartList()
{   
    if (shoppingCart.size() > 0)
    {
        for (Product p : shoppingCart)
        {
            cout << p.getName() << endl;
            cout << p.getDescription() << endl;
            cout << p.getPrice() << endl << endl;
        }
    } 
    else 
    {
        cout << "Shopping cart is empty";
    }
}

void ShoppingCart::addToCart(string name)
{

    auto catalog.getCatalog() = catalog;

    for (int i = 0;i < catalog.getCatalog().size();i++)
    {
        if (catalog.getCatalog().at(i).getName() == name)
        {
            // pushes desired product to shoppingcart if exist in catalog
            shoppingCart.push_back(catalog.getCatalog().at(i));
        }
    }    
}

