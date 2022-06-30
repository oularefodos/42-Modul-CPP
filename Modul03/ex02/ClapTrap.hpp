#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
    protected:
        int hitpoint;
        int Energy_points;
        int damage;
        std::string name;
    public:
        ClapTrap(std::string const _name);
        ClapTrap(ClapTrap const &obj);
        ClapTrap(void);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        ~ClapTrap(void);
        ClapTrap& operator=(ClapTrap const obj);

};

#endif