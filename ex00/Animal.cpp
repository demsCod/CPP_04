

#include "Animal.hpp"


const std::string&  Animal::getType() const
{
	return type;
}
Animal ::Animal(){

	std :: cout << "Animal has been created" << std::endl; 
	type = "not typed";
	
}


Animal :: ~Animal()
{
	std :: cout << "Animal is destroyed" << std::endl; 
	
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