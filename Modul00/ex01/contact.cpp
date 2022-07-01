#include "phonebook.h"

void Contact::create_contact(std::string _firstName, std::string _lastName, std::string _nickName, std::string _phoneNumber, std::string _secret)
{
    firstName = _firstName;
    lastName = _lastName;
    nickName = _nickName;
    phoneNumber = _phoneNumber;
    secret = _secret;
}

void Contact::display(std::string str)
{
    int i;

    i = str.size();
    if (i <= 10)
    {
        std::cout << str;
        while(i++ < 10)
            std::cout << " ";
    }
    else
        std::cout << str.substr(0, 9) << ".";
}

void Contact::getData(int id)
{
    
    std::cout<< id << "         |";
    display(firstName);
    std::cout << "|";
    display(lastName);
    std::cout << "|";
    display(nickName);
    std::cout << std::endl;
}

void Contact::getNumber()
{
    std::cout << firstName << "|" << lastName << "|" << nickName << "|" << phoneNumber << std::endl;
}