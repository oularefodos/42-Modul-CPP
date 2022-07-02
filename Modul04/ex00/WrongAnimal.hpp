#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>
#include <string>

class WrongAnimal {
    protected:
        std::string type;
    public:
        WrongAnimal(void);
        ~WrongAnimal(void);
        WrongAnimal(WrongAnimal const &ob);
        WrongAnimal& operator=(WrongAnimal const ob);
        void makeSound(void) const;
        void setType(std::string _type);
        std::string getType(void) const;
};

#endif