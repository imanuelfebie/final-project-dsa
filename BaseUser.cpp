#include <iostream>
#include "headers/BaseUser.h"

using namespace std;

int BaseUser::idCounter = 0;

BaseUser::BaseUser() {}

BaseUser::BaseUser(string fullname, string username, string password)
{	
	setFullname(fullname);
	setUsername(username);
	setPassword(password);
}

/* Getters & Setters */

int BaseUser::getIdCounter()
{
	return ++idCounter;
}

void BaseUser::setID(int userID)
{
	this->userID = userID;
}


int BaseUser::getID()
{
	return this->userID;
}

void BaseUser::setFullname(string fullname)
{
	this->fullName =fullname;
}

void BaseUser::setUsername(string username)
{
	this->userName=username;
}

void BaseUser::setPassword(string password)
{
	this->passWord=password;
}

string BaseUser::getFullname()
{
return this->fullName;
}

string BaseUser::getUsername()
{
return this->userName;
}

string BaseUser::getPassword()
{
return this->passWord;
}


