#ifndef Cat_HPP
#define Cat_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
    private:
        Brain *brain;
    public:
        Cat(void);
        Cat& operator=(Cat const ob);
        Cat(Cat const &ob);
        std::string getType(void) const;
        void makeSound(void) const;
        ~Cat(void);
};

#endif