#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <string.h>
#include <iostream>
#include "contact.hpp"
#include  <cstdlib>

class PhoneBook {
    private:
        Contact contacts[8];
        int n;
    public:
        PhoneBook();
        void add_contact();
        void search_contact();
};

#endif