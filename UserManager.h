#ifndef USERMANAGER_H
#define USERMANAGER_H

// #include <Admin.h>
#include "AnonymousUser.h"
#include "Customer.h"
#include "Session.h"

#include <vector>
#include <string>

class UserManager
{
    private:
        AnonymousUser anonymousUser;
        Customer customer;
        Session session(false, "Anonymous");

    public:
        AnonymousUser getAnonymousUser();
        Customer getCustomer();
        Session getCurrentSession();

        bool login(std::string username, std::string password);
        Session startSession(bool authenticate, std::string currentUser);
        void createCustomer(Customer c);
};

#endif
