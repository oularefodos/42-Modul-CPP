#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>

class DiamondTrap : public FragTrap, public ScavTrap
{
    private:
        std::string name;
    public:
        DiamondTrap(void);
        DiamondTrap(std::string _name);
        DiamondTrap(DiamondTrap const &ob);
        ~DiamondTrap(void);
        void whoAmI(void);
};

#endif