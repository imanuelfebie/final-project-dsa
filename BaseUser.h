#ifndef BASEUSER_H
#define BASEUSER_H

#include<iostream>
#include <string>
#include <queue>

class BaseUser
{
	private:
		std::queue <float> orderHistory;

        unsigned long int ID;
        
        std::string fullName;
        std::string userName;
        std::string passWord;

    protected:
    	bool isAdmin;

    public:
        BaseUser();
        BaseUser(std::string fullname, std::string username, std::string password);

        virtual void setIsAdmin(bool isAdmin) = 0;
        
        void setID(unsigned long int id);
        unsigned long int getID();
        
        void setFullname(std::string fullname);
        void setUsername(std::string username);
        void setPassword(std::string password);
        
        std::string getFullname();
        std::string getUsername();
        std::string getPassword();
        
        void addOrder(float bill);
        float printOrderHistory();
};

#endif
