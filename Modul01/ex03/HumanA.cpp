#include "main.h"
#include "Weapon.hpp"

HumanA::HumanA(std::string _name, Weapon& _arme)
{
    arme = &_arme;
    name = _name;
}


void HumanA::attack(void)
{
    std::cout << name << " attacks with their " << arme->getType() << std::endl;
}