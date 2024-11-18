#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"

class Cure : public AMateria
{
  private:
	/* data */
  public:
	Cure();
	virtual void use(ICharacter& target);
	virtual AMateria *clone() const;
	~Cure();
};



#endif