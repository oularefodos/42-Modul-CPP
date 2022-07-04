#include "Cat.hpp"

Cat::Cat(void)
{
    brain = new Brain;
    std::cout << "create a Cat" << std::endl;
    setType("Cat");
}

Cat::Cat(Cat const &ob)
{
    std::cout << "create a Cat" << std::endl;
    brain = new Brain;
    brain = ob.brain;
    setType(ob.type);
}

Cat& Cat::operator=(Cat const& ob)
{
    delete brain;
    brain = new Brain;
    brain = ob.brain;
    setType(ob.type);
    return *this;
}

std::string Cat::getType(void) const
{
    return this->type;
}

void Cat::makeSound(void) const
{
    std::cout << "le crie du chat" << std::endl;
}

Cat::~Cat(void)
{
    delete brain;
    std::cout << "destruction de l'objet Cat" << std::endl;
}