#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter {
    private:
        std::string name;
        AMateria *tab[4];
        int index;
    public:
        Character(void);
        ~Character(void);
        Character(std::string _name);
        Character(Character const& ob);
        Character& operator=(Character const& ob);
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif