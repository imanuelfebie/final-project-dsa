#include "Product.h"

using namespace std;

Product::Product(string name, string description, float price,
        unsigned short int stock)
{
   setId(id);
   setName(name);
   setDescription(description);
   setPrice(price);
   setStock(stock);
}

void Product::setId(int id)
{
    this->id = id;
}

// void Product::setCategory(Category category)
// {   
//     this->category = category;
// }

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

void Product::setStock(unsigned short int stock)
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

unsigned short int Product::getStock()
{
    return this->stock;
}
