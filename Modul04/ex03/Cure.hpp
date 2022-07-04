#ifndef CURE_HPP
#define CURE_HPP
#include "AMateria.hpp"

class Cure : public AMateria {
    public:
        AMateria* clone(void) const;
        Cure(void);
        Cure(Cure const &ob);
        Cure& operator=(Cure const &ob);
        ~Cure(void);
        virtual void use(ICharacter& target);
};

#endif