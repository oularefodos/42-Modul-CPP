#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
    private:
       Weapon& arme;
       std::string name;
    public:
        void attack(void);
        HumanB(std::string _name, Weapon *_arme);
};

#endif