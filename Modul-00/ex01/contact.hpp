#ifndef _CONTACT_
#define _CONTACT_
#include <string>
#include <iostream>

class Contact {
    public:
        void create_contact(std::string _firstName, std::string _lastName, std::string _nickName, std::string _phoneNumber, std::string _secret);
        void getData(int id);
        void getNumber();
    private:
        std::string firstName;
        std::string phoneNumber;
        std::string nickName;
        std::string lastName;
        std::string secret;
};

#endif