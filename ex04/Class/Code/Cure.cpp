#include "Cure.hpp"



Cure::Cure() : AMateria("ice")
{

}
AMateria *Cure::clone() const
{
	AMateria *b = new Cure();
	return b;
}

void Cure::use(ICharacter& target){
	std::cout << "Cure : ''* heals " << target.getName() << "'s wounds *''"<< std::endl;
}

Cure::~Cure()
{
}