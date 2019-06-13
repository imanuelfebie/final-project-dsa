#include "BaseUser.h"

using namespace std;

BaseUser::BaseUser(string fullname, string username, string password)
{
    setID(++idProvider);
    setFullname(fullname);
    setUsername(username);
    setPassword(password);
    isAdmin = false;
}

int BaseUser::idProvider = 0;

BaseUser::BaseUser(){
	isAdmin = false;
}

void BaseUser::setID(int id)
{
    this->id = id;
}

void BaseUser::setFullname(string fullname)
{
    this->fullname = fullname;
}

void BaseUser::setUsername(string username)
{
    this->username = username;
}

void BaseUser::setPassword(string password)
{
    this->password = password;
}

unsigned long int BaseUser::getID()
{
    return this->id;
}

string BaseUser::getFullname()
{
    return this->fullname;
}

string BaseUser::getUsername()
{
    return this->username;
}

string BaseUser::getPassword()
{
    return this->password;
}
