cmake_minimum_required(VERSION 3.0)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "-std=c++11")

project(FinalProject)

add_executable(
    shopApp
    App.cpp
    Admin.cpp
    BaseUser.cpp
    Customer.cpp
    UserManager.cpp
    Product.cpp
    Catalog.cpp
    ShoppingCart.cpp
    View.cpp
        FileManager.cpp

)
