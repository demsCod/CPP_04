#include "Brain.hpp"
#include <iostream>

void Brain::SetIdeas(std:: string& id, int index)
{
	if (index <  100 && index > -1)
		ideas[index] = id;
	else
		{std::cout  << "dont have enought place to set ideas!"; return ; }
}

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
		ideas[i] = "...";
	std::cout << "brain has created" << std::endl;
}

Brain::Brain(Brain const &copy)
{
	*this = copy;
}

Brain& Brain::operator=(Brain const &affect)
{
	if (this != &affect)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = affect.GetIdeas(i);
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "brain destroyed" << std::endl;
}



std::string Brain::GetIdeas(int index) const 
{
	if (index < 0 || index > 99)
    	return NULL;
	return (ideas[index]);
	
}