#include "Dog.hpp"

Dog::Dog(void)
{
    std::cout << "create Dog" << std::endl;
    setType("Dog");
}

Dog::Dog(Dog const &ob) 
{
    setType(ob.type);
}

Dog& Dog::operator=(Dog const ob)
{
    setType(ob.type);

    return *this;
}

std::string Dog::getType(void) const
{
    return this->type;
}

void Dog::makeSound(void) const
{
    std::cout << "le crie du chien" << std::endl;
}

Dog::~Dog(void)
{
    std::cout << "destruction de l'objet Dog" << std::endl;
}