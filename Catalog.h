#ifndef CATALOG_H
#define CATALOG_H

#include "Product.h"
#include <iterator>
// #include <vector>
#include <list>
#include <string>

class Catalog 
{
    private:
        std::list<Product> catalog;
        // std::vector<Product> catalog;
        // std::vector<Product>::iterator i; 
    
    public:
        // add product to catalog
        void createProduct(Product p);
        // delete product from catalog
        void deleteProduct(std::string name);
        // update a product
        void updateProduct(std::string name);
        // list products inside catalog
        void listProduct();
        // search products 
        // void searchProduct(std::string name);
};

#endif

