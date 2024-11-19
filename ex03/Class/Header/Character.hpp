#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <string>
# include "ICharacter.hpp"
# include "AMateria.hpp"  

class Character : public ICharacter
{
   private :
		AMateria *_stuff[4];
		AMateria *_stash[100];
		std::string _name;
   public :
	 ~Character();
	 Character(const std::string name);
	 Character(const  Character& other);
	  std::string const& getName() const;
	  const AMateria  *GetStuff() const;
	  void equip(AMateria *m);
	  void unequip(int idx);
	  void use(int idx, ICharacter &target);
};

#endif