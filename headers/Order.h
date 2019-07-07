#ifndef ORDER_H
#define ORDER_H

#include "Customer.h"
#include "ShoppingCart.h"
#include <vector>

class Order
{
    private:
        std::vector<Product> customerCart;
        Customer customer;

    public:
        Order(Customer, std::vector<Product>);

        void setCustomer(Customer c);
        Customer getCustomer();

        void setCustomerCart(std::vector<Product>);
        std::vector<Product> getCustomerCart();

};

#endif