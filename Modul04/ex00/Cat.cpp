#include "Cat.hpp"

Cat::Cat(void)
{
    std::cout << "create a Cat" << std::endl;
    setType("Cat");
}

Cat::Cat(Cat const &ob)
{
    setType(ob.type);
}

Cat& Cat::operator=(Cat const ob)
{
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
    std::cout << "destruction de l'objet Cat" << std::endl;
}