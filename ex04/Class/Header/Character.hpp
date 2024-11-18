#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <string>
# include "ICharacter.hpp"

class Character : public ICharacter
{
   private :
		AMateria *_stuff[4];
		AMateria *_stash[100];
		std::string _name;
   public :
	 virtual ~Character();
	 Character(const std::string name);
	 Character(const  Character& other);
	 std::string& const GetName();
	 const AMateria  *GetStuff() const;
	 virtual void equip(AMateria *m);
	 virtual void unequip(int idx);
	 virtual void use(int idx, Character &target);
};

#endif