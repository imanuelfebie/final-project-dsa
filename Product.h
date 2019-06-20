#ifndef PRODUCT_H
#define PRODUCT_H

#include "Category.h"
#include <string>

class Product
{
    private:
        int id;
        static int uniqueID;
        std::string name;
        std::string description;
        float price;
        int quantity;
        Category category;
        unsigned short int stock;
    
    public:
        Product(const std::string &name, const std::string &description, const float &price, 
                const unsigned short int &stock);
        
        // bool swap(const Product&, const Product&);

        void setId(int id);
        // void setCategory(Category category);
        void setName(std::string name);
        void setDescription(std::string description);
        void setPrice(float price);
        void setStock(unsigned short int stock);
        void setCategory(std::string name);
        std::string getCategory();

        int getId();
        // Category getCategory();
        std::string getName();
        std::string getDescription();
        float getPrice();
        unsigned short int getStock();
};

#endif 