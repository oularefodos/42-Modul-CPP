#include "main.h"


Weapon::Weapon (std::string _type)
{
    type = _type;
}

Weapon::Weapon (void)
{
    type = "";
}

void Weapon::setType (std::string _type)
{
    type = _type;
}

std::string Weapon::getType (void)
{
    return type;
}
