#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"
# include "ICharacter.hpp" 
class Ice : public AMateria
{
  private:
	/* data */
  public:
	Ice();
	virtual void use(ICharacter& target);
	virtual AMateria *clone() const;
	~Ice();
};



#endif