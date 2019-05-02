#include "BaseUser.h"

using namespace std;

BaseUser::BaseUser(string fullname, string username, string password)
{
   setFullname(fullname);
   setUsername(username);
   setPassword(password);
   isAdmin = false;
}

void BaseUser::setID(unsigned long int id)
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
