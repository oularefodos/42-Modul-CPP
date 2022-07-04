#include "Character.hpp"

Character::Character(void)
{
    int i;

    i = 0;
    this->index = -1;
    while(i < 4)
        tab[i++] = NULL;
    name = "";
}

Character::Character(std::string _name)
{
    int i;

    i = 0;
    this->index = -1;
    while(i < 4)
        tab[i++] = NULL;
    name = _name;
}

Character::Character(Character const& ob)
{
    int i;

    i = -1;
    this->index = ob.index;
    while(ob.tab[++i])
        *tab[i] = *ob.tab[i];
    name = ob.name;
}

Character& Character::operator=(Character const& ob)
{
    int i;

    i = -1;
    this->index = ob.index;
    while(ob.tab[++i])
        *tab[i] = *ob.tab[i];
    name = ob.name;
    return *this;
}

std::string const& Character::getName(void) const
{
    return name;
}

void Character::equip(AMateria *m)
{
    if (index < 3)
        tab[++index] = m;
}

void Character::unequip(int idx)
{
    int y;
    AMateria *cp[4];

    if (idx <= index && idx < 4)
    {
        for (int i = idx; i < index; i++)
            tab[i] = tab[i + 1];
        index--;
    }
}

void Character::use(int idx, ICharacter& target)
{
    if (idx <= index)
    {
        tab[idx]->use(target);
    }
}

Character::~Character(void)
{
    int i = 0;

    while(i <= index)
        delete tab[i++];
}