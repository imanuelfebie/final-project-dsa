#include <iostream>
#include "BaseUser.h"

using namespace std;

BaseUser::BaseUser() {}

BaseUser::BaseUser(string fullname, string username, string password)
{
	setFullname(fullname);
	setUsername(username);
	setPassword(password);
}

void BaseUser::setID(unsigned long int id)
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
 void BaseUser::addOrder(float bill)
 {
 	if (orderHistory.size()>=10){
 		this->orderHistory.push(bill);
	 }else{
	 	this->orderHistory.pop();
	 	this->orderHistory.push(bill);
	 }
 	
 }
 float BaseUser::printOrderHistory()
 {	
 	queue <float> temp=this->orderHistory;
 	while(!temp.empty()){
 		cout<<temp.back()<<endl;
 		temp.pop();
	 }
 }

