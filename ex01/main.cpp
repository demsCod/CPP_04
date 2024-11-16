#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	const Animal *swap;
	const Animal *op(swap);

	swap = j;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << swap->getType() << " \n";
	op->getType();

	swap->makeSound();
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	 return (0);
}