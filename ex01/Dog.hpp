#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class Dog : public Animal
{
	private :
		Brain *_brain;
	public:
		Dog();
		~Dog();
		Dog(const Dog &other);
		void makeSound() const;
		Dog &operator=(const Dog &other);
		std::string GetIdeas(int index) const;
		void SetIdeas(std::string ideas,  int index);
};

#endif