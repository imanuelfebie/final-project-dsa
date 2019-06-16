#ifndef SESSION_H
#define SESSION_H

#include <string>

class Session
{
    /**
     * Class simulating a session.
     */

    private:
        bool isAuthenticated;
        std::string currentUser;

    public:
        Session();
        Session(bool isAuthenticated, std::string currentUser);

        void setIsAuthenticated(bool isAuthenticated);
        bool getIsAuthenticated();

        void setCurrentUser(std::string currentUser);
        std::string getCurrentUser();
};

#endif 