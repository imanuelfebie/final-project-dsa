#include "ShoppingCart.h"
#include <algorithm>
#include <iostream>
#include <numeric>

using namespace std;

void ShoppingCart::cartList()
{   
    cout << shoppingCart.size() << endl << endl;

    if (shoppingCart.size() > 0)
    {   
        cout << calculateTotalPrice() << endl;

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

void ShoppingCart::addToCart(string &name, Catalog catalog)
{   
    /** 
     * FIXED: Doesnt add objects to the shoppingcart vector
     * TODO: 1. Calculate total price
     *       2. Allow choosing quantity
     */

    for (Product &p : catalog.getCatalog())
    {
        if (p.getName() == name) {
            shoppingCart.push_back(p);
        } else {
            // Display message if object does not exist.
        }
    }
}

float ShoppingCart::calculateTotalPrice()
{
    // Returns the total price of the shopping cart.
    for (Product &p : shoppingCart)
        totalPrice += p.getPrice();
    
    return totalPrice;
}