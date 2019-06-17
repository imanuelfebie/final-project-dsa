#ifndef ORDER_H
#define ORDER_H


#include "ShoppingCart.h"

class Order
{
    private:
        string timestamp;

    public:
        Order(ShoppingCart cart, string timestamp);
        std::vector<Product> getOrder(ShoppingCart cart);

};

#endif