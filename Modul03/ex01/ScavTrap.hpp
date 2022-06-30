#ifndef SCAVTRAP_CPP
#define SCAVTRAP_CPP

#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap {
    public:
        void attack(const std::string& target);
        ScavTrap(void);
        ScavTrap(ScavTrap const &ob);
        ScavTrap(std::string _name);
        ~ScavTrap(void);
        void guardGate(void);
};



#endif