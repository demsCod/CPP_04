#ifndef AMATERIA_HPP
# define AMATERIA_HPP
#include <string>
#include <iostream>

class ICharacter;



class AMateria
{
	protected:
		std::string _type;
	public :
		virtual ~AMateria(){};
		AMateria(std::string const& type);
		AMateria(AMateria const& other);
		AMateria& operator=(AMateria const& other);
		std::string const& getType() const; //Returns the materia type
		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
