#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

int	main(void)
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	const Animal *swap;
	const WrongAnimal *fake = new WrongCat();
	const WrongAnimal *faux = new WrongDog();

	fake->makeSound();
	faux->makeSound();
	swap = j;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << swap->getType() << " \n";

	
	swap->makeSound();   //will output the dog sound!
	i->makeSound(); //will output the cat sound!
	j->makeSound(); //will output the dog sound!
	meta->makeSound();

	delete meta;
	delete j;
	delete i;
	delete faux;
	delete fake;

	return (0);
}