#ifndef PRODUCT_H
#define PRODUCT_H

#include "Category.h"
#include <string>

class Product
{
    private:
        int id;
        // Category category;
        std::string name;
        std::string description;
        float price;
        unsigned short int stock; 
    
    public:
        Product(std::string name, std::string description, float price, 
                unsigned short int stock);

        void setId(int id);
        // void setCategory(Category category);
        void setName(std::string name);
        void setDescription(std::string description);
        void setPrice(float price);
        void setStock(unsigned short int stock);

        int getId();
        Category getCategory();
        std::string getName();
        std::string getDescription();
        float getPrice();
        unsigned short int getStock();
};

#endif 