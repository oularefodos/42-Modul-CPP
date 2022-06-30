#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public:
        FragTrap(void);
        ~FragTrap(void);
        FragTrap(std::string _name);
        FragTrap(FragTrap const &ob);
        void highFivesGuys(void);
};


#endif