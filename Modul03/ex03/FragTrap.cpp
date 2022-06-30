#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
    std::cout << "Creat Object FragTrap " << name << std::endl;
    hitpoint = 100;
    Energy_points = 50;
    damage = 20;
}

FragTrap::~FragTrap(void)
{
    std::cout << "Destroy The FragTrap Object" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "I wanted high Fives" << std::endl;
}

FragTrap::FragTrap(std::string _name) : ClapTrap(_name)
{
    std::cout << "Creat Object FragTrap " << name << std::endl;
    hitpoint = 100;
    Energy_points = 50;
    damage = 20;
}

FragTrap::FragTrap(FragTrap const &ob) : ClapTrap()
{
    std::cout << "Creat Object FragTrap " << name << std::endl;
    hitpoint = ob.hitpoint;
    Energy_points = ob.Energy_points;
    damage = ob.damage;
    name = ob.name;
}
