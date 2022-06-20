#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
    private:
       Weapon arme;
       std::string name;
    public:
        void attack(void);
        HumanA(std::string _name, Weapon& _arme);
};

#endif