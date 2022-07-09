#include "Ice.hpp"

Ice::Ice(void)
{
    _type = "cure";
}

Ice::Ice(Ice const &ob)
{
    _type = ob._type;
}

Ice& Ice::operator=(Ice const& ob)
{
    _type = ob._type;
    return *this;
}

Ice::~Ice(void)
{
}

AMateria* Ice::clone(void) const
{
    AMateria *a = new Ice();
    return a;
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}