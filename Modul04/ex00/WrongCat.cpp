#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
    std::cout << "create a WrongCat" << std::endl;
    setType("WrongCat");
}

WrongCat::WrongCat(WrongCat const &ob)
{
    setType(ob.type);
}

WrongCat& WrongCat::operator=(WrongCat const ob)
{
    setType(ob.type);
    return *this;
}

std::string WrongCat::getType(void) const
{
    return this->type;
}

void WrongCat::makeSound(void) const
{
    std::cout << "le crie du Wrongchat" << std::endl;
}

WrongCat::~WrongCat(void)
{
    std::cout << "destruction de l'objet WrongCat" << std::endl;
}