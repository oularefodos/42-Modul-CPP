#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap fode("fode");
    ClapTrap miros;

    miros.attack("fode");
    fode.takeDamage(1);
    fode.beRepaired(23);

    return (0);
}