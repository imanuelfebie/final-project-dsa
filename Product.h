#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

class Product
{
    private:
        unsigned long int id;
        std::string name;
        std::string description;
        float price;
        unsigned short int stock; 
    
    public:
        Product(std::string name, std::string description, float price, unsigned short int stock);
        
        void setName(std::string name);
        void setDescription(std::string description);
        void setPrice(float price);
        void setStock(unsigned short int stock);

        int getId();
        std::string getName();
        std::string getDescription();
        float getPrice();
        unsigned short int getStock();
};

#endif 