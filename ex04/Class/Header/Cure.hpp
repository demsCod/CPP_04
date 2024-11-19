#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp" 


class Cure : public AMateria
{
  private:
	/* data */
  public:
	Cure();
	void use(ICharacter& target);
	AMateria *clone() const;
	~Cure();
};



#endif