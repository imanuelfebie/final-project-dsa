#ifndef CATALOG_H
#define CATALOG_H

#include "Product.h"
#include <iterator>
#include <vector>
// #include <list>
#include <string>

class Catalog 
{
    // friend class ShoppingCart;

    private:
        std::vector<Product> catalog;
        std::vector<Product>::iterator it;
    
    public:
        // getter for catalog
        std::vector<Product> getCatalog();
        // add product to catalog -> admin
        void productCreate(Product p);
        // delete product from catalog -> admin
        void productDelete(std::string name);
        // update a product -> admin
        void productUpdate(std::string &name);
        // list products inside catalog
        // void productList();
        
        // boolean search method
        bool productBoolSearch(std::string &name);

        // search by returning the object
        Product getObject(std::string);

        // void sortCatalog();
        
};

#endif

