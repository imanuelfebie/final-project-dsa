#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H

#include "Catalog.h"
#include <vector>

class ShoppingCart
{   
    private:
        // vector that contains products to order
        std::vector<Product> shoppingCart;
        Catalog catalog;
        // int quantity;
    
    public:
        void cartList();
        void addToCart(std::string);
        void deleteFromCart(std::string);
        void clearCart();
};

#endif