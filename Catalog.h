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
        // std::vector<Product> catalog;
        // std::vector<Product>::iterator i; 
    
    public:
        /**
         * TODO: The createProduct(), deleteProduct() and updateProduct() method should only be accessible by the admin user
         */

        // add product to catalog -> admin
        void productCreate(Product p);
        // delete product from catalog -> admin
        void productDelete(std::string name);
        // update a product -> admin
        void productUpdate(std::string name);
        // list products inside catalog

        void productList();
        // search products 
        void productSearch(std::string name);
};

#endif

