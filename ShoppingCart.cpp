#include "ShoppingCart.h"
#include <algorithm>
#include <iostream>
#include <numeric>

using namespace std;

int ShoppingCart::cartSize()
{
    return this->shoppingCart.size();
}

void ShoppingCart::addToCart(string &name, Catalog catalog)
{   
    for (Product &p : catalog.getCatalog())
    {
        if (p.getName() == name)
            this->shoppingCart.push_back(p);
    }
}

float ShoppingCart::calculateTotalPrice()
{
    // Returns the total price of the shopping cart.
    for (Product &p : shoppingCart)
        totalPrice += p.getPrice();
    
    return totalPrice;
}

vector<Product> ShoppingCart::getCart()
{
    return this->shoppingCart;
}
