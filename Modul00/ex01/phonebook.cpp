#include "phonebook.h"

PhoneBook::PhoneBook()
{
    n = 0;
}

void PhoneBook::add_contact()
{
    int i;
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string secret;
    
    i = 0;
    while (i < 5)
    {
        if (i == 0)
        {
            std::cout << "Entrer votre prenom : ";
            std::getline(std::cin, firstName);
            if (!std::cin.good()) {
            std::cout << "Error...." << std::endl;
            exit(1);
            }
        }
        if (i == 1)
        {
            std::cout << "Entrer votre nom : ";
            std::getline(std::cin, lastName);
            if (!std::cin.good()) {
            std::cout << "Error...." << std::endl;
            exit(1);
            }
        }
        if (i == 2)
        {
            std::cout << "Entrer votre surnom : ";
            std::getline(std::cin, nickName);
            if (!std::cin.good()) {
            std::cout << "Error...." << std::endl;
            exit(1);
            }
        }
        if (i == 3)
        {
            std::cout << "Entrer votre numero : ";
            std::getline(std::cin, phoneNumber);
            if (!std::cin.good()) {
            std::cout << "Error...." << std::endl;
            exit(1);
            }
        }
        if (i == 4)
        {
            std::cout << "Entrer votre secret : ";
            std::getline(std::cin, secret);
            if (!std::cin.good()) {
            std::cout << "Error...." << std::endl;
            exit(1);
            }
        }
        if ((i == 0 && firstName == "") || (i == 1 && lastName == "") 
        || (i == 2 && nickName == "") || (i == 3 && phoneNumber == "") || (i == 4 && secret == ""))
        {
            std::cout << std::endl << "cette chaine est obligatoire" << std::endl << std::endl ;
        }
        else
            i++;
    }
    if (n == 8)
        n = 7;
    contacts[n].create_contact(firstName, lastName, nickName, phoneNumber, secret);
    if (n < 8)
        n++;
}

void PhoneBook::search_contact()
{
    int i;
    std::string enter;

    i = -1;
    while (++i < n)
        contacts[i].getData(i);
    std::cout << "Entrer l'idantifiant : ";
    std::getline(std::cin, enter);
    if (!std::cin.good()) {
            std::cout << "Error...." << std::endl;
            exit(1);
    }
    if (enter[0] >= '0' && enter[0] - 48 < n && enter.size() == 1)
        contacts[enter[0] - 48].getNumber();
}