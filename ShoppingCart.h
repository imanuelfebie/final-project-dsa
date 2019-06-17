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

        std::vector<Product> getCart();
        void addToCart(std::string&, Catalog);
        void deleteFromCart(std::string);
        void clearCart();
};

#endif