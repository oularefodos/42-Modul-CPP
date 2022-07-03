#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include <string>

class Animal {
    protected:
        std::string type;
    public:
        Animal(void);
        virtual ~Animal(void);
        Animal(Animal const &ob);
        Animal& operator=(Animal const ob);
        void virtual makeSound(void) = 0;
        std::string getType(void) const;
        void setType(std::string _type);
};

#endif