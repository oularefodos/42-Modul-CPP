#ifndef Dog_HPP
#define Dog_HPP
#include "Animal.hpp"

class Dog : public Animal {
    public:
        Dog(void);
        Dog& operator=(Dog const ob);
        Dog(Dog const &ob);
        std::string getType(void) const;
        void makeSound(void) const;
        ~Dog(void);
};

#endif