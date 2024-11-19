#ifndef MATERIA_HPP
#define MATERIA_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private :
		AMateria *library[4];
		AMateria *stash[400];
	public:
		MateriaSource();
		virtual ~MateriaSource();
		void learnMateria(AMateria *m);
		AMateria* createMateria(std::string const & type);
};


#endif
