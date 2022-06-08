#include "phonebook.hpp"

int main(void)
{
    std::string enter;
    PhoneBook book;

    while (1)
    {
        std::cout << "Entrer une commande : ";
        std::cin >> enter;
        if (enter == "EXIT")
            break;
        if (enter == "ADD")
            book.add_contact();
        if (enter == "SEARCH")
            book.search_contact();
    }
    return (0);
}