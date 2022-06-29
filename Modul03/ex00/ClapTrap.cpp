#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    std::cout << "Create Object Claptrap" << std::endl;
    name = "unknown name";
}

ClapTrap::ClapTrap(std::string const _name)
{
    std::cout << "Create Object Claptrap" << std::endl;
    name = _name;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "destroy Object ClapTrap" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &obj)
{
    name = obj.name;
    hitpoint = obj.hitpoint;
    Energy_points = obj.Energy_points;
    damage = obj.damage;
}

void ClapTrap::attack(const std::string& target)
{
    if (Energy_points > 0 && hitpoint > 0)
    {
        std::cout << "ClapTrap " << name << " attacks ";
        std::cout << target << ", causing " << "damage " << " points of damage" << std::endl;
        this->Energy_points--;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (Energy_points > 0 && hitpoint > 0)
    {
        std::cout << "ClapTrap " << this->name << " take damage " << std::endl;
        this->hitpoint -= amount;
        if (hitpoint < 0)
            hitpoint = 0;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (hitpoint > 0)
    {
        std::cout << "ClapTrap " << this->name << " repaired " << std::endl;
        this->Energy_points += amount;
    }
}