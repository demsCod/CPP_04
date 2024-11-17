

#include "../Header/AMateria.hpp"

// 		AMateria(AMateria const& other);

// 		// [...] 
// 		std::string const& getType() const; //Returns the materia type
// 		virtual AMateria *clone() const = 0;
// 		// virtual void use(ICharacter& target);

AMateria::AMateria(std::string const& type)
{
	std::cout << type <<  "Materia has been created\n";
	_type = type;
}