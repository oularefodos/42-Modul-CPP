#include "main.h"

HumanA::HumanA(std::string _name, Weapon& _arme)
{
    arme = _arme;
    name = _name;
}

void HumanA::attack(void)
{
    if (arme.getType() != "")
        std::cout << name << " attacks with their " << arme.getType() << std::endl;
    else
        std::cout << name << " attacks " << std::endl;
}