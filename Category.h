#ifndef CATEGORY_H
#define CATEGORY_H

#include <string>

class Category
{
    private:
        std::string name;

    public:
        void setName(std::string name);
        std::string getName();
};

#endif 