#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap miros("Miros");
    miros.attack("Unknow");
    miros.guardGate();

    std::cout << std::endl << "**********************************************************" << std::endl << std::endl;

    ScavTrap miros2;
    miros2.attack("Unknow");
    miros2.guardGate();

    return (0);
}