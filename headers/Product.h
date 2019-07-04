/**
 * Product class declaration
 * created by Imanuel Febie
 */
#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

class Product
{
    private:
    
        int id;
        static int uniqueID;
        std::string name;
        std::string description;
        float price;
        int stock;
    
    public:
        Product(const std::string &name, const std::string &description, const float &price, int &stock);
        
        // bool swap(const Product&, const Product&);

        void setId(int id);
        // void setCategory(Category category);
        void setName(std::string name);
        void setDescription(std::string description);
        void setPrice(float price);
        void setStock(int stock);

        int getId();
        // Category getCategory();
        std::string getName();
        std::string getDescription();
        float getPrice();
        int getStock();
};

#endif 