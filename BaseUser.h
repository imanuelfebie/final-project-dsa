#ifndef BASEUSER_H
#define BASEUSER_H

#include <string>

class BaseUser 
{
    /**
     * The BaseUser class contains basic or shared information that both the Administrator and the Customer needs to have an "account".
     */

    private:
        int id;
        static int idProvider; // Used to increment the id for each new User instance

        std::string fullname;
        std::string username;
        std::string password;

    protected:
        bool isAdmin;

    public:
        // BaseUser();
		BaseUser(std::string fullname, std::string username, std::string password);

        virtual void setIsAdmin(bool isAdmin) = 0;
        bool getIsAdmin();

        void setID(int id);
        void setFullname(std::string fullname);
        void setUsername(std::string username);
        void setPassword(std::string password);
        int getID();
        std::string getFullname();
        std::string getUsername();
        std::string getPassword();
};

#endif
