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
		const std::string& GetIdeas(int index);
		void SetIdeas(std::string ideas,  int index);
};

#endif