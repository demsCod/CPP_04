

#include "Animal.hpp"


const std::string&  Animal::getType() const
{
	return type;
}
Animal ::Animal()
{type = "not typed";}


Animal :: ~Animal()
{

}

Animal :: Animal(std::string t)
{
	type = t;
}

void Animal :: makeSound() const
{
	std :: cout << "* ANIMAL SOUND *" << std::endl; 
}


Animal& Animal::operator=(const Animal &other)
{
	if (this != &other)
	{
		type = other.type;
	}
	return (*this);
}