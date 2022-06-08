#include "phonebook.hpp"

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
            std::cout << "entrer votre prenom : ";
            std::cin >> firstName;
        }
        if (i == 1)
        {
            std::cout << "entrer votre nom : ";
            std::cin >> lastName;
        }
        if (i == 2)
        {
            std::cout << "entrer votre surnom : ";
            std::cin >> nickName;
        }
        if (i == 3)
        {
            std::cout << "entrer votre numero : ";
            std::cin >> phoneNumber;
        }
        if (i == 4)
        {
            std::cout << "entrer votre secret : ";
            std::cin >> secret;
        }
        if ((i == 0 && firstName == "") || (i == 1 && lastName == "") 
        || (i == 2 && nickName == "") || (i == 3 && phoneNumber == "") || (i == 4 && secret == ""))
        {
            std::cout << "cette chaine est obligatoire" << std::endl;
        }
        else
            i++;
    }
    contacts[n].create_contact(firstName, lastName, nickName, phoneNumber, secret);
    if (n < 7)
        n++;
}

void PhoneBook::search_contact()
{
    int i;
    int id;

    i = -1;
    while (++i < n)
        contacts[i].getData(i);
    std::cout << "Entrer l'idantifiant : ";
    std::cin >> id;
    if (id > -1 && id < n)
        contacts[id].getNumber();
}