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
        std::vector<Product>::iterator it;
    
    public:
        
        std::vector<Product> getCatalog();
        
        bool productCreateController(std::string, std::string, float, int);
        
        void productDeleteController(int);
        
        void productUpdate(int);
        
        // boolean search method
        bool productBoolSearch(std::string &name);

        // search by returning the object
        Product getObject(std::string);

        // void sortCatalog();
        
};

#endif

