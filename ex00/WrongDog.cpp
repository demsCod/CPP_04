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
	}
	return (*this);
}

WrongDog::WrongDog(const WrongDog &other)
{
	*this = other;
}