#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H

#include "Catalog.h"
#include <vector>
#include <iterator>

class ShoppingCart
{   
    private:
        // vector that contains products to order
        std::vector<Product> shoppingCart;
        float totalPrice = 0.0;
    
    public:
        void cartList();
        int cartSize();
        int objectQuantity();
        float calculateTotalPrice();
        

        void addToCart(std::string&, Catalog);
        void deleteFromCart(std::string);
        void clearCart();
};

#endif