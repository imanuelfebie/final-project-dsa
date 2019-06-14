#include "BaseUser.h"

using namespace std;

int BaseUser::idProvider = 0;

BaseUser::BaseUser(string fullname, string username, string password)
{
    setID(++idProvider);
    setFullname(fullname);
    setUsername(username);
    setPassword(password);
}

bool BaseUser::getIsAdmin()
{
    return this->isAdmin;
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

int BaseUser::getID()
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
