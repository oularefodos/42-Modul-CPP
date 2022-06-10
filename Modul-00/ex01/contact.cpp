#include "phonebook.h"

void Contact::create_contact(std::string _firstName, std::string _lastName, std::string _nickName, std::string _phoneNumber, std::string _secret)
{
    firstName = _firstName;
    lastName = _lastName;
    nickName = _nickName;
    phoneNumber = _phoneNumber;
    secret = _secret;
}

void Contact::getData(int id)
{
    std::cout << id  << "|" << firstName << "|" << lastName << "|" << nickName << std::endl;
}

void Contact::getNumber()
{
    std::cout << firstName << "|" << lastName << "|" << nickName << "|" << phoneNumber << std::endl;
}