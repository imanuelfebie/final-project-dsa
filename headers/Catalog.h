#ifndef CATALOG_H
#define CATALOG_H

#include "Product.h"
#include <iterator>
#include <vector>
// #include <list>
#include <string>

class Catalog 
{
    private:
        std::vector<Product> catalog;
    
    public:
        
        std::vector<Product> getCatalog();
        
        bool productCreateController(std::string, std::string, float, int);
        
        bool productDeleteController(int, Catalog);
        
        bool productSearchController(std::string);

        void productNameUpdate(std::string);
        void productDescriptionUpdate(std::string);
        void productPriceupdate(float);
        void productStockUpdate(int);
        
};

#endif

