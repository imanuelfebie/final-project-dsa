#ifndef ORDERMANAGER_H
#define ORDERMANAGER_H

#include "Order.h"
#include "ShoppingCart.h"
#include <vector>

class OrderManager 
{

    private:
        std::vector<Order> orderList;

    public:
        void createOrder(Customer c, std::vector<Product>);
        std::vector<Order> getOrderList();

};

#endif