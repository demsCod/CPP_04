#include "WrongAnimal.hpp"


const std::string&  WrongAnimal::getType() const
{
	return type;
}
WrongAnimal ::WrongAnimal()
{type = "not typed";}


WrongAnimal :: ~WrongAnimal()
{
	std::cout << type << " destroy" << std::endl;
}

WrongAnimal :: WrongAnimal(std::string t)
{
	type = t;
}

void WrongAnimal :: makeSound() const
{
	std :: cout << "* WrongANIMAL SOUND *" << std::endl; 
}