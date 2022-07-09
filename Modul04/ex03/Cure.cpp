#include "Cure.hpp"

Cure::Cure(void)
{
    _type = "cure";
}

Cure::Cure(Cure const &ob)
{
    _type = ob._type;
}

Cure& Cure::operator=(Cure const& ob)
{
    _type = ob._type;
    return *this;
}

Cure::~Cure(void)
{
}

AMateria* Cure::clone(void) const
{
    AMateria *a = new Cure();
    return a;
}

void Cure::use(ICharacter & target)
{
    std::cout << "* heals "<< target.getName() << "'s wounds *" << std::endl;
}