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
	}
	return (*this);
}

Dog::Dog(const Dog &other)
{
	std::cout << type << " is created" <<std::endl;

	*this = other;
}

Dog::~Dog()
{
	std ::cout << type << " destroy" << std::endl;
	delete _brain;
}


const std::string& Dog::GetIdeas(int index)
{
	return (this->_brain->GetIdeas(index));
}
void Dog::SetIdeas(std::string ideas,  int index)
{
	this->_brain->SetIdeas(ideas, index);
}