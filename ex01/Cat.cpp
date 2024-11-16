#include "Cat.hpp"

void Cat::makeSound() const
{
	std::cout << "Miaaaaaaou" << std::endl;
}

Cat::Cat()
	: Animal("Cat")
{
	type = "Cat";
}
Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		type = other.type;
	}
	return (*this);
}

Cat::Cat(const Cat &other)
{
	*this = other;
}
