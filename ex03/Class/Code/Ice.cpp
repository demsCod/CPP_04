#include "../Header/Ice.hpp"



Ice::Ice() : AMateria("ice")
{

}
AMateria *Ice::clone() const
{
	AMateria *b = new Ice();
	return b;
}

void Ice::use(ICharacter& target){
			std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice()
{}