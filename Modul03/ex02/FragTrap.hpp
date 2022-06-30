#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap(void);
        ~FragTrap(void);
        FragTrap(std::string _name);
        FragTrap(FragTrap const &ob);
        void attack(const std::string& target);
        void highFivesGuys(void);
        FragTrap& operator=(FragTrap const ob);
};


#endif