#ifndef MATERIA_HPP
#define MATERIA_HPP

#include "AMateria.hpp"

class MateriaSource
{
	public:
		virtual ~MateriaSource() {}
		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);
};


#endif
