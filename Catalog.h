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
        /**
         * TODO: The createProduct(), deleteProduct() and updateProduct() method should only be accessible by the admin user
         */

        std::vector<Product> getCatalog();
        // add product to catalog -> admin
        void productCreate(Product p);
        // delete product from catalog -> admin
        void productDelete(std::string name);
        // update a product -> admin
        void productUpdate(std::string &name);
        // list products inside catalog

        void productList();
        // search products 
        bool productSearch(std::string name);
        
};

#endif

