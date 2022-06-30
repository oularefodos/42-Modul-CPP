#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
    std::cout << "Creat Object Scavtrap " << name << std::endl;
    hitpoint = 100;
    Energy_points = 50;
    damage = 20;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "Destroy The ScraTrap Object" << std::endl;
}

void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap came into Gate Guardian Mode" << std::endl;
}

ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name)
{
    std::cout << "Creat Object Scavtrap " << name << std::endl;
    hitpoint = 100;
    Energy_points = 50;
    damage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &ob) : ClapTrap()
{
    std::cout << "Creat Object Scavtrap " << name << std::endl;
    hitpoint = ob.hitpoint;
    Energy_points = ob.Energy_points;
    damage = ob.damage;
    name = ob.name;
}

void ScavTrap::attack(const std::string& target)
{
    if (Energy_points > 0 && hitpoint > 0)
    {
        std::cout << "ScavTrap " << name << " attacks ";
        std::cout << target << ", causing " << "damage " << " points of damage" << std::endl;
        this->Energy_points--;
    }
}
