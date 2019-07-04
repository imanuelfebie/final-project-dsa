#ifndef BASEUSER_H
#define BASEUSER_H

#include<iostream>
#include <string>
#include <queue>

class BaseUser
{
	private:
        static int idCounter;
        int userID;
        std::string fullName;
        std::string userName;
        std::string passWord;

    protected:
    	bool isAdmin;

    public:
        BaseUser();
        BaseUser(std::string fullname, std::string username, std::string password);

        virtual void setIsAdmin(bool isAdmin) = 0;
        
        static int getIdCounter();
        void setID(int id);
        int getID();
        
        void setFullname(std::string fullname);
        void setUsername(std::string username);
        void setPassword(std::string password);
        
        std::string getFullname();
        std::string getUsername();
        std::string getPassword();
};

#endif
