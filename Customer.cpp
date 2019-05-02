#include "Customer.h"
#include <string>

using namespace std;

void Customer::setAddress(string address)
{
	this->address = address;
}
void Customer::setAge(int age)
{
	this->age = age;
}
string Customer::getAddress()
{
	return this->address;
}
int Customer::getAge()
{
	return this->age;
}
