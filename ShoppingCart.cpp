#include "headers/ShoppingCart.h"
#include <algorithm>
#include <iostream>
#include <numeric>

using namespace std;

float ShoppingCart::getTotalPrice()
{   
    /**
     * Sums up the total price if the shoppingcart
     */
    
    for (Product &p : shoppingCart)
        this->totalPrice += p.getPrice();
    
    return this->totalPrice;
}

vector<Product> ShoppingCart::getCart()
{
    /**
     * Return the shopping cart vector
     */
    return this->shoppingCart;
}


int ShoppingCart::cartSize()
{
     /**
      * Return the cart vector which can be used to loop in the views
      */

    return this->shoppingCart.size();
}

void ShoppingCart::addToCart(int id, Catalog catalog)
{
    /**
     * Checks if the user input product id exist inside the catalog vector,
     * if it exist that object will be "copied" into the shopping cart vector
     **/

    for (Product &p : catalog.getCatalog())
    {
        if (p.getId() == id)
            this->shoppingCart.push_back(p);
    }
}

bool ShoppingCart::deleteItemFromCart(int id, ShoppingCart cart)
{
    /**
     * Erase item from cart if input name is inside the cart
     */

    for (int i = 0;i < cart.cartSize();i++)
    {
        if (cart.getCart()[i].getId() == id)
            cart.getCart().erase(cart.getCart().begin() + i);
    }
}

void ShoppingCart::clearCart()
{
    /**
     * Empty the objects from cart and sets totalprice back to 0.00
     */
    
    this->shoppingCart.clear();
    this->totalPrice = 0.0;
}