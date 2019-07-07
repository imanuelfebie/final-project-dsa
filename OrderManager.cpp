#include "headers/OrderManager.h"

using namespace std;

void OrderManager::createOrder(Customer c, vector<Product> cart)
{
    /* Creates order and pushes back to orderList */
    this->orderList.push_back(Order(c, cart));
}

vector<Order> OrderManager::getOrderList()
{
    return this->orderList;
}