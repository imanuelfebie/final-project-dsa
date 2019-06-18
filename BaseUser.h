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
    	BaseUser(){};
        virtual void setIsAdmin()=0;
        void setID(unsigned long int id);
        void setFullname(std::string fullname);
        void setUsername(std::string username);
        void setPassword(std::string password);
        unsigned long int getID();
        std::string getFullname();
        std::string getUsername();
        std::string getPassword();
        void addOrder(float bill);
        float getLastOrder();
};

#endif
