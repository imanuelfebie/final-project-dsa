#include "AnonymousUser.h"

#include <string>

using namespace std;

AnonymousUser::AnonymousUser() 
{ 
    setUser("Anonymous"); 
}

void AnonymousUser::setUser(string user) 
{ 
    this->user = user; 
}

string AnonymousUser::getUser() 
{ 
    return this->user; 
}