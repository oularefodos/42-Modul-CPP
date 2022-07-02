#ifndef WrongCat_HPP
#define WrongCat_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
    public:
        WrongCat(void);
        WrongCat& operator=(WrongCat const ob);
        WrongCat(WrongCat const &ob);
        std::string getType(void) const;
        void makeSound(void) const;
        ~WrongCat(void);
};

#endif