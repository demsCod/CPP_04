#include "Cat.hpp"

void Cat::makeSound() const
{
	std::cout << "Miaaaaaaou" << std::endl;
}

Cat::Cat()
	: Animal("Cat")
{
	std::cout << type << " is created" <<std::endl;

	type = "Cat";
}
Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		type = other.type;
		std::cout << "Cat was copyed with success" << std::endl;
	}
	return (*this);
}

Cat::Cat(const Cat &other)  : Animal("cat")
{
	std::cout << type << " is created" <<std::endl;

	*this = other;
}


Cat::~Cat()
{
	std::cout << type << " destroy" << std::endl;
}
