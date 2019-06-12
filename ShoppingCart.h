#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H

#include "Catalog.h"
#include <vector>

class ShoppingCart
{   
    private:
        // vector that contains products to order
        std::vector<Product> shoppingCart;
        // int quantity;
    
    public:
        void cartList();
        int cartSize();

        void addToCart(std::string, Catalog);
        void deleteFromCart(std::string);
        void clearCart();
};

#endif