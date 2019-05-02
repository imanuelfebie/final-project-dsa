#ifndef BASEUSER_H
#define BASEUSER_H

#include <string>

class BaseUser 
{
    private:
        unsigned long int id;
        std::string fullname;
        std::string username;
        std::string password;
        bool isAdmin;

    public:
        BaseUser(std::string fullname, std::string username, std::string password);

        virtual void setIsAdmin() = 0; 
        void setID(unsigned long int id);
        void setFullname(std::string fullname);
        void setUsername(std::string username);
        void setPassword(std::string password);
        unsigned long int getID();
        std::string getFullname();
        std::string getUsername();
        std::string getPassword();


};

#endif
