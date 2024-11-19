#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
int main()
{
  std::cout << "-------------------[Mandatory tests 0]----------------------" << std::endl;
  const Animal* j = new Dog();
  const Animal* i = new Cat();

  //example of imposible case
  //const Animal o;
  //o.makeSound();

  delete j;
  delete i;
  std::cout << "-------------------[Mandatory tests 1]----------------------" << std::endl;
  std::cout << "~~~~~~~~~~~~~~~[INIT]~~~~~~~~~~~~~~~" << std::endl;
  Animal *animals[10];
  for (int i = 0; i < 10; i++) {
    std::cout << "[" << i << "] ";
    if (i % 2 == 0)
      animals[i] = new Cat();
    else
      animals[i] = new Dog();
    if (!animals[i]) {
      for (int j = 0; j < i; j++) {delete animals[j];}
      std::cout << "Memory alloctation error" << std::endl;
      return 1;
    }
  }

  std::cout << "~~~~~~~~~~~~~~~[COPY]~~~~~~~~~~~~~~~" << std::endl;
  dynamic_cast<Cat*>(animals[0])->SetIdeas("The human is late for my dinner again.", 0);
  dynamic_cast<Dog*>(animals[5])->SetIdeas("You’re the best human ever!", 0);
  
  Cat* catCopy = new Cat(*dynamic_cast<Cat*>(animals[0]));
  if (!catCopy) {
    std::cout << "Memory alloctation error" << std::endl;
    for (int i = 0; i < 10; i++) {delete animals[i];}
    return 1;
  }
  Dog* dogCopy = new Dog(*dynamic_cast<Dog*>(animals[5]));
  if (!dogCopy) {
    for (int i = 0; i < 10; i++) {delete animals[i];}
    delete catCopy;
    std::cout << "Memory alloctation error" << std::endl;
    return 1;
  }

  std::cout << "~~~~~~~~~~~~~~~[ACTIONS]~~~~~~~~~~~~~~~" << std::endl;
  for (int i = 0; i < 10; i++) {
    animals[i]->makeSound();
  }

	for (int i = 0; i < 10; i++) {

		for (int j = 0; j < 100; j++)
		{
			if (i % 2)
				dynamic_cast<Dog*>(animals[i])->SetIdeas("You’re the best human ever!", j) ;
			else
				dynamic_cast<Cat*>(animals[i])->SetIdeas("The human is late for my dinner again.", j);

		}

  }

	std::cout << "heeeeeeeere" << std::endl;

  for(int i = 0; i  < 10; i++)
  {


		for (int j = 0; j < 100; j++)
		{
			if (i % 2 == 0)
				std::cout << dynamic_cast<Cat*>(animals[i])->GetIdeas(j) << std::endl ;
			else
				std::cout << dynamic_cast<Dog*>(animals[i])->GetIdeas(j) << std::endl ;
		} 


  }

  std::cout << "~~~~~~~~~~~~~~~[CLEAR]~~~~~~~~~~~~~~~" << std::endl;
  for (int i = 0; i  < 10; i++) {delete animals[i];}
  delete catCopy;
  delete dogCopy;
  return 0;
}