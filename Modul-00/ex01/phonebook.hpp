#ifndef _PHONEBOOK_
#define _PHONEBOOK_
#include <string.h>
#include <iostream>
#include "contact.hpp"

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