#include "Zombie.hpp"

Zombie::Zombie (std::string _name) 
{
    name = _name;
}

Zombie::Zombie (void) 
{
    name = "";
}

void Zombie::announce(void)
{
    std::cout << name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string _name)
{
    name = _name;
}

Zombie::~Zombie(void)
{
    std::cout << name << " is dead" << std::endl;
}
