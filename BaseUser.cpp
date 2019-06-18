#include <iostream>
#include "BaseUser.h"

using namespace std;
void BaseUser::setID( int id)
{
	this->ID = id;
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
 unsigned long int BaseUser::getID()
 {
 	return this->ID;
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
