#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria {
    public:
        AMateria* clone(void) const;
        Ice(void);
        Ice(Ice const &ob);
        Ice& operator=(Ice const &ob);
        ~Ice(void);
        virtual void use(ICharacter& target);

};

#endif