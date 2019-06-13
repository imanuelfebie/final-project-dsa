#include "ShoppingCart.h"
#include <algorithm>
#include <iostream>
#include <numeric>

using namespace std;

int ShoppingCart::cartSize()
{
    return shoppingCart.size();
}

void ShoppingCart::addToCart(string &name, Catalog catalog)
{   
    for (Product &p : catalog.getCatalog())
    {
        if (p.getName() == name) {
            shoppingCart.push_back(p);
        } else {
            // Display message if object does not exist.
        }
    }
}

void ShoppingCart::addToCart(string name, Catalog catalog)
{
    for (Product p : catalog.getCatalog())
    {
        if (p.getName() == name) {
            shoppingCart.push_back(p);
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

void ShoppingCart::displayCart()
{   
    cout << "Total items : " << shoppingCart.size() << endl << endl;

    if (!shoppingCart.empty()) {   
        for (Product p : shoppingCart)   
            cout << p.getName() << p.getPrice() << endl;
    } else {
        cout << "Shopping cart is empty" << endl;
    }
}
