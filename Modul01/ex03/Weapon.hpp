#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {
    private:
        std::string type;
    public:
        std::string getType(void);
        void setType(std::string _type);
        Weapon(void);
        Weapon(std::string _type);
};

#endif