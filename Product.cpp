#include "headers/Product.h"

using namespace std;

Product::Product(const string &name, const string &description, const float &price, int &stock)
{
   setId(++uniqueID);
   setName(name);
   setDescription(description);
   setPrice(price);
   setStock(stock);
}

int Product::uniqueID = 0;

void Product::setId(int id)
{
    this->id = id;
}

void Product::setName(string name)
{
    this->name = name;
}

void Product::setDescription(string description)
{
    this->description = description;   
}

void Product::setPrice(float price)
{
    this->price = price;
}

void Product::setStock(int stock)
{
    this->stock = stock;
}

int Product::getId()
{
    return this->id;
}

string Product::getName()
{
    return this->name;
}

string Product::getDescription()
{
    return this->description;
}

float Product::getPrice()
{
    return this->price;
}

int Product::getStock()
{
    return this->stock;
}