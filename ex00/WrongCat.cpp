#include "WrongCat.hpp"

void WrongCat::makeSound() const
{
	std::cout << "Miaaaaaaou" << std::endl;
}

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
	type = "WrongCat";
}
WrongCat &WrongCat::operator=(const WrongCat &other)
{
	if (this != &other)
	{
		type = other.type;
		std::cout << "WrongCat was copyed with success" << std::endl;

	}
	return (*this);
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal("WrongCat")
{
	*this = other;
}


WrongCat::~WrongCat(){

	std::cout << type << " destroy" << std::endl;
}
