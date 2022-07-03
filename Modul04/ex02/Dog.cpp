#include "Dog.hpp"

Dog::Dog(void)
{
    brain = new Brain;
    std::cout << "create Dog" << std::endl;
    setType("Dog");
}

Dog::Dog(Dog const &ob) 
{
    std::cout << "create Dog" << std::endl;
    brain = new Brain;
    brain = ob.brain;
    setType(ob.type);
}

Dog& Dog::operator=(Dog const ob)
{
    delete brain;
    brain = new Brain;
    brain = ob.brain;
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
    delete brain;
    std::cout << "destruction de l'objet Dog" << std::endl;
}