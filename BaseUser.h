#ifndef BASEUSER_H
#define BASEUSER_H
#include<iostream>
#include <string>

class BaseUser
{
	private:
        unsigned long int ID;
        std::string fullName;
        std::string userName;
        std::string passWord;
    protected:
    	bool isAdmin;
    public:
    	BaseUser(){};
        void setIsAdmin();
        void setID( int id);
        void setFullname(std::string fullname);
        void setUsername(std::string username);
        void setPassword(std::string password);
        unsigned long int getID();
        std::string getFullname();
        std::string getUsername();
        std::string getPassword();
};

#endif
