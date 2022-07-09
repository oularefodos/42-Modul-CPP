#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <iostream>
#include <string>
class AMateria;
#include "ICharacter.hpp"

class AMateria
{
    protected:
        std::string _type;
    public:
        AMateria(void);
        AMateria(std::string const & type);
        virtual ~AMateria(void);
        AMateria(AMateria const &ob);
        AMateria& operator=(AMateria const &ob);
        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif