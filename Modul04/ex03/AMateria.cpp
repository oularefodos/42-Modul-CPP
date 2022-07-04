#include "AMateria.hpp"

AMateria::AMateria(std::string const &type)
{
    this->_type = type;
}

AMateria::AMateria(AMateria const &ob)
{
    this->_type = ob._type;
}

AMateria::AMateria(void)
{
    this->_type = "";
}

AMateria& AMateria::operator=(AMateria const &ob)
{
    this->_type = ob._type;
    return *this;
}

AMateria::~AMateria(void)
{

}

std::string const& AMateria::getType() const
{
    return _type;
}

void AMateria::use(ICharacter& target)
{
    (void)target;
}