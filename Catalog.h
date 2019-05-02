#ifndef CATALOG_H
#define CATALOG_H

#include "Product.h"
#include <iterator>
#include <vector>
#include <string>

class Catalog 
{
    private:
        vector<Product> catalog;
        vector<Product>::iterator i; 
    
    public:
        // add product to catalog
        void createProduct(Product p);
        // delete product from catalog
        void deleteProduct(std::string name);
        // list products inside catalog
        void listProduct();
        // search products 
        void searchProduct(std::string name);
};

#endif

