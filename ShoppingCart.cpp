#include "ShoppingCart.h"
#include <algorithm>
#include <iostream>

using namespace std;

void ShoppingCart::cartList()
{   
    cout << shoppingCart.size() << endl << endl;

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

int ShoppingCart::cartSize()
{
    return shoppingCart.size();
}

void ShoppingCart::addToCart(string name, Catalog catalog)
{   
    /** 
     * FIXED: Doesnt add objects to the shoppingcart vector
     * TODO: 1. Calculate total price
     *       2. Allow choosing quantity
     */

    for (Product p : catalog.getCatalog())
    {
        if (catalog.getItem(name)) {
            shoppingCart.push_back(p); // add to cart if given name exist in catalog

            printf("%s has been added.\n\n",
                    p.getName().c_str());
        } else {
            printf("%s does not exist in our catalog.\n\n",
                    name.c_str());
        }
    }
}

