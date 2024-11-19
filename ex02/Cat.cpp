#include "Cat.hpp"


void Cat::makeSound() const
{
	std::cout << "Miaaaaaaou" << std::endl;
}

Cat::Cat()
	: Animal("Cat")
{
	type = "Cat";
	std::cout << type << " is created" <<std::endl;
	_brain = new Brain();
}
Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		type = other.type;
		for (int i = 0, i < 100, i++)
			Brain::ideas[i] =  
	}
	return (*this);
}

Cat::Cat(const Cat &other)
{
	std::cout << type << " is created" <<std::endl;

	*this = other;
}

Cat::~Cat()
{
	std ::cout << type << " destroy" << std::endl;
	delete _brain;
}