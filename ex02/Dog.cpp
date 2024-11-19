#include "Dog.hpp"

void Dog::makeSound() const
{
	std::cout << "Waf Waf" << std::endl;
}

Dog::Dog() : Animal("Dog")
{
	type = "Dog";
	std::cout << type << " is created" <<std::endl;
	_brain = new Brain();
}

Dog& Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		type = other.type;
		this->_brain = new Brain(*other._brain);
	}
	return (*this);
}

Dog::Dog(const Dog &other) : Animal("Dog")
{
	std::cout << type << " is created" <<std::endl;

	*this = other;
}

Dog::~Dog()
{
	std ::cout << type << " destroy" << std::endl;
	delete _brain;
}

std::string Dog::GetIdeas(int index) const
{
	if (index > 99 || index < 0 ) 
		index = 0;
	return (_brain->GetIdeas(index));
}

void Dog::SetIdeas(std::string ideas,  int index)
{
	_brain->SetIdeas(ideas, index);
}