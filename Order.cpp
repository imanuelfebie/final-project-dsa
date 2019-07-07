#include "headers/Order.h"

using namespace std;

Order::Order(Customer c, vector<Product> customerCart)
{

}

void Order::setCustomer(Customer c)
{
    this->customer = c;
}

Customer Order::getCustomer()
{
    return this->customer;
}

void Order::setCustomerCart(vector<Product> customerCart)
{
    this->customerCart = customerCart;
}

vector<Product> Order::getCustomerCart()
{
    return this->customerCart;
}