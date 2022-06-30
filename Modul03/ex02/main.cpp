#include "FragTrap.hpp"

int main(void)
{
    FragTrap miros("Miros");
    miros.attack("Unknow");
    miros.highFivesGuys();

    std::cout << std::endl << "**********************************************************" << std::endl << std::endl;

    FragTrap miros2;
    miros2.attack("Unknow");
    miros2.highFivesGuys();

    return (0);
}