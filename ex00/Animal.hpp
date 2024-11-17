#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
	protected :
		std::string type;

	public :
		Animal();
		virtual ~Animal();
		Animal(std:: string);
		const std::string& getType() const;
		virtual void makeSound() const;
		Animal& operator=(const Animal& other);



};







# endif