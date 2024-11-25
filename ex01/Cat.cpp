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
		this->_brain = new Brain(*other._brain);
	}
	return (*this);
}

Cat::Cat(const Cat &other) : Animal("Cat")
{
	std::cout << type << " is created" <<std::endl;

	*this = other;
}

std::string Cat :: GetIdeas(int index) 
{
	if (index > 99 || index < 0 ) index = 0;
	return (this->_brain->GetIdeas(index));
}
void Cat::SetIdeas(std::string ideas,  int index)
{
	this->_brain->SetIdeas(ideas, index);
}



Cat::~Cat()
{
	std ::cout << type << " destroy" << std::endl;
	delete _brain;
}