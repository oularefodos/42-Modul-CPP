#include "Zombie.hpp"

Zombie::Zombie (std::string _name) 
{
    name = _name;
}

void Zombie::announce(void)
{
    std::cout << name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << name << " is dead" << std::endl;
}

Zombie* newZombie( std::string name )
{
    Zombie *zombie = new Zombie(name);
    return (zombie);
}

void randomChump(std::string name)
{
    Zombie zombie(name);
    zombie.announce();
}
