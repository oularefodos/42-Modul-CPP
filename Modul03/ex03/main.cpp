#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap miros("Miros");
    miros.attack("Unknow");
    miros.whoAmI();

    std::cout << std::endl << "**********************************************************" << std::endl << std::endl;

    DiamondTrap miros2;
    miros2.attack("Unknow");
    miros2.whoAmI();

    return (0);
}