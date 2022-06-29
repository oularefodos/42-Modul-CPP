#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
    private:
        int hitpoint = 10;
        int Energy_points = 10;
        int damage = 0;
        std::string name;
    public:
        ClapTrap(std::string const _name);
        ClapTrap(ClapTrap const &obj);
        ClapTrap(void);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        ~ClapTrap(void);
};

#endif