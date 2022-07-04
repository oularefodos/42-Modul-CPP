#include "Animal.hpp"

Animal::Animal(void)
{
    std::cout << "creat Animal" << std::endl;
    this->type = "Animal";
}

// void Animal::makeSound(void) const
// {
//     std::cout << "le crie de l'Animal" << std::endl;
// }

std::string Animal::getType(void) const
{
    return type;
}

void Animal::setType(std::string _type)
{
    this->type = _type;
}

Animal::~Animal(void)
{
    std::cout << "destroy Animal object" << std::endl;
}

Animal::Animal(Animal const &ob)
{
    this->type = ob.type;
}

Animal& Animal::operator=(Animal const& ob)
{
    this->type = ob.type;
    return *this;
}
