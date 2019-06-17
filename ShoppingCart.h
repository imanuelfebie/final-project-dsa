#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H

#include "Catalog.h"
#include <vector>
#include <iterator>

class ShoppingCart
{   
    private:
        /**
         * TODO: add Customer User field as private member
         * 
         */

        std::vector<Product> shoppingCart;
        float totalPrice = 0.0;
    
    public:
        int cartSize();
        float getTotalPrice();

        void addToCart(int, Catalog);
        bool deleteItemFromCart(std::string);
        std::vector<Product> getCart();
        void clearCart();
};

#endif