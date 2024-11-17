#include "Brain.hpp"
#include <iostream>

void Brain::SetIdeas(std:: string& id, int index)
{
	if (index > 99)
		{std::cout  << "dont have enought place to set ideas!"; return ; }
	ideas[index] = id;
}