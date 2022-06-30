#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    hitpoint = 10;
    Energy_points = 10;
    damage = 0;
    name = "";
    std::cout << "Create Claptrap " << name << std::endl;
    
}

ClapTrap::ClapTrap(std::string const _name)
{
    hitpoint = 10;
    Energy_points = 10;
    damage = 0;
    name = _name;
    std::cout << "Create Claptrap " << name << std::endl;
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

ClapTrap& ClapTrap::operator=(ClapTrap const obj)
{
    name = obj.name;
    hitpoint = obj.hitpoint;
    Energy_points = obj.Energy_points;
    damage = obj.damage;

    return *this;
}