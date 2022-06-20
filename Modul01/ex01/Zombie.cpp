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

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *zombies;
    
    zombies = new Zombie[N];
    for (int i(0); i < N; i++)
        zombies[i].setName(name);
    return (zombies);
}
