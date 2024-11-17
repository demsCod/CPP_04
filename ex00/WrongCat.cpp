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
	}
	return (*this);
}

WrongCat::WrongCat(const WrongCat &other)
{
	*this = other;
}


WrongCat::~WrongCat(){

	std::cout << type << " destroy" << std::endl;
}
