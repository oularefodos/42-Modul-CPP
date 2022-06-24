#include "main.h"
#include "Weapon.hpp"

HumanB::HumanB(std::string _name, Weapon& _arme)
{
    arme = &_arme;
    name = _name;
}

HumanB::HumanB(std::string _name)
{
    name = _name;
}

void HumanB::setWeapon(Weapon& _arme)
{
    arme = &_arme;
}

void HumanB::attack(void)
{
    if (arme->getType() != "")
        std::cout << name << " attacks with their" << arme->getType() << std::endl;
    else
        std::cout << name << " attacks with his hand" << std::endl;
}