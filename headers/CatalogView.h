#ifndef CATALOG_VIEW
#define CATALOG_VIEW

#include "Catalog.h"
#include "BaseView.h"

class CatalogView : public BaseView
{

    private:
        static CatalogView *singleCatalogView;
    
    public:
        static CatalogView *getCatalogView();
        void viewHeading(std::string title);
        void inventoryManagementView();
        void productCreateView();
        void productDeleteView();
        void productUpdateView();
        void productListView();

};

#endif