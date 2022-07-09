#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource(void)
{
    int i;

    i = -1;
    index = -1;
    while(++i < 4)
        tab[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const& ob)
{
    int i;
    
    i = -1;
    while(++i < 4)
        tab[i] = ob.tab[i];
    index = ob.index;
}

MateriaSource& MateriaSource::operator=(MateriaSource const& ob)
{
    int i;
    
    i = -1;
    while(++i < 4)
        tab[i] = ob.tab[i];
    index = ob.index;
    return *this;
}
MateriaSource::~MateriaSource(void)
{
    int i;

    i = -1;
    while(++i <= index)
        delete tab[i];
}

AMateria* MateriaSource::createMateria(std::string const& type)
{
    AMateria *ret;

    ret = 0;
    if (type == "ice")
        ret = new Ice();
    if (type == "cure")
        ret = new Cure();
    return ret;
}

void MateriaSource::learnMateria(AMateria *m)
{
    if (index < 3)
        tab[++index] = m;
}