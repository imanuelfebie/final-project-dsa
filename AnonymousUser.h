#ifndef ANONYMOUSUSER_H
#define ANONYMOUSUSER_H

#include <string>

class AnonymousUser
{
    private:
        std::string user;

    public:
        AnonymousUser();

        void setUser(std::string user);
        std::string getUser();
};

#endif