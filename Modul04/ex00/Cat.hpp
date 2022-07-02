#ifndef Cat_HPP
#define Cat_HPP
#include "Animal.hpp"

class Cat : public Animal {
    public:
        Cat(void);
        Cat& operator=(Cat const ob);
        Cat(Cat const &ob);
        std::string getType(void) const;
        void makeSound(void) const;
        ~Cat(void);
};

#endif