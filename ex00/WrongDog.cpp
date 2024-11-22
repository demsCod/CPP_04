#include "WrongDog.hpp"

void WrongDog::makeSound() const
{
	std::cout << "Waf Waf" << std::endl;
}

WrongDog::WrongDog(): WrongAnimal("WrongDog")
{
	type = "WrongDog";
}
WrongDog &WrongDog::operator=(const WrongDog &other)
{
	if (this != &other)
	{
		type = other.type;
		std::cout << "WrongDog was copyed with success" << std::endl;
	}
	return (*this);
}

WrongDog::WrongDog(const WrongDog &other): WrongAnimal("WrongDog")
{
	*this = other;
}



WrongDog::~WrongDog(){

	std::cout << type << " destroy" << std::endl;
}