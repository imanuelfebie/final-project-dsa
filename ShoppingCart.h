#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H

#include "Catalog.h"
#include "Customer.h"
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
        float calculateTotalPrice();

        void addToCart(std::string&, Catalog);
        void addToCart(std::string&, int, Catalog);
        void deleteFromCart(std::string);
        void clearCart();
        void displayCart();
};

#endif