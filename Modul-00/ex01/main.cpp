#include "phonebook.h"

int main(void)
{
    std::string enter;
    PhoneBook book;

    while (1)
    {
        std::cout << "ENTRER UNE COMMANDE : ";
        std::getline(std::cin, enter);
        if (!std::cin.good()) {
            std::cout << "Error...." << std::endl;
            break;
        }
        if (enter == "EXIT")
            break;
        if (enter == "ADD")
            book.add_contact();
        if (enter == "SEARCH")
            book.search_contact();
    }
    return (0);
}