#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
    private:
        int index;
        AMateria *tab[4];
    public:
        virtual void learnMateria(AMateria *m) ;
        virtual AMateria* createMateria(std::string const & type);
        MateriaSource(void);
        MateriaSource(MateriaSource const& ob);
        MateriaSource& operator=(MateriaSource const& ob);
        ~MateriaSource(void);
};


#endif