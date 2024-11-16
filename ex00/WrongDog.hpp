#ifndef WRONGDOG_HPP
# define WRONGDOG_HPP
# include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal
{
  public:
	WrongDog();
	WrongDog(const WrongDog &other);
	void makeSound() const;
	WrongDog &operator=(const WrongDog &other);
};

#endif
