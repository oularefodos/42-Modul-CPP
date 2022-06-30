#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
    std::cout << "Creat DiamondTrap Object" << std::endl;
    name = "";
    ClapTrap::name = name + "_clap_name";
    hitpoint = FragTrap::hitpoint;
    Energy_points = ScavTrap::Energy_points;
    damage = FragTrap::damage;
}

DiamondTrap::DiamondTrap(std::string _name)
{
    std::cout << "Creat DiamondTrap Object" << std::endl;
    name = _name;
    ClapTrap::name = name + "_clap_name";
    hitpoint = FragTrap::hitpoint;
    Energy_points = ScavTrap::Energy_points;
    damage = FragTrap::damage;
}

DiamondTrap::DiamondTrap(DiamondTrap const &ob)
{
    std::cout << "Creat DiamondTrap Object" << std::endl;
    name = ob.name;
    ClapTrap::name = name + "_clap_name";
    hitpoint = ob.hitpoint;
    Energy_points = ob.Energy_points;
    damage = ob.damage;
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "Destroy DiamondTrap Object" << std::endl;
}

void DiamondTrap::whoAmI(void)
{
    std::cout << "I am " << name << " from " << ClapTrap::name << std::endl;
}