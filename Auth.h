#ifndef AUTH_H
#define AUTH_H

#include "Customer.h"
#include "UserManager.h"
#include <vector>
#include <string>

class Auth
{
    friend class UserManager;

    protected:
        bool isAuthenticated;
        std::string currentUser;
        // UserManager usermanager;

    public:
        Auth(bool isAuthenticated, std::string username);

        void setIsAuthenticated(bool isAuthenticated);
        bool getIsAuthenticated();

        void setCurrentUser(std::string currentUser);
        std::string getCurrentUser();

        // ~Auth(); // deconstructor
};

#endif