#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>
#include "Brain.hpp"

class Animal
{
	protected :
		std::string type;

	public :
		Animal();
		virtual ~Animal();
		Animal(std:: string);
		const std::string& getType() const;
		virtual void makeSound() const = 0;
		Animal& operator=(const Animal& other);
};







# endif