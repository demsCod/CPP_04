

#include "../Header/AMateria.hpp"

// 		AMateria(AMateria const& other);

// 		// [...] 
// 		//

AMateria::AMateria(std::string const& type)
{
	std::cout << type <<  "Materia has been created\n";
	_type = type;
}


AMateria::AMateria(const AMateria& other)
{
	*this = other;
}


std::string  const& AMateria::getType() const
{
	return _type;
}


AMateria& AMateria::operator=(AMateria const& other)
{
	if (this != &other)
	{
		this->_type = other._type;
	}
	return *this;
}


void AMateria::use(ICharacter& target)
{
	if (_type == "ice")
		std::cout << "Ice : " << "''* shoots an ice bolt at " << target.getName() << " *''" << std::endl;
	else if (_type == "cure")
		std::cout << "Cure : ''* heals " << target.getName() << "'s wounds *''"<< std::endl;
	return ;
}