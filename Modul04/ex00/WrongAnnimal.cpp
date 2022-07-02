#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
    std::cout << "create A WrongAnimal" << std::endl;
    this->type = "Animal";
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "le de WrongAnimal" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
    return type;
}

void WrongAnimal::setType(std::string _type)
{
    this->type = _type;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "destroy Anaimal object" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &ob) 
{
    this->type = ob.type;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const ob)
{
    this->type = ob.type;
    return *this;
}
