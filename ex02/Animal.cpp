

#include "Animal.hpp"


const std::string&  Animal::getType() const
{
	return type;
}
Animal ::Animal()
{
	std::cout  << "default Animal created" << std::endl;
	type = "default";
}


Animal :: ~Animal()
{
	std::cout << type << "Animal destroy" << std::endl;
}

Animal :: Animal(std::string t)
{
	type = t;
	std::cout  << t << " Animal created" << std::endl;
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

