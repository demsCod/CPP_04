#include "Dog.hpp"

void Dog::makeSound() const
{
	std::cout << "Waf Waf" << std::endl;
}

Dog::Dog()
	: Animal("Dog")
{
	type = "Dog";
}

Dog& Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		type = other.type;
	}
	return (*this);
}

Dog::Dog(const Dog &other)
{
	*this = other;
}