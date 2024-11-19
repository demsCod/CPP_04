#include "../Header/Character.hpp"


void Character::equip(AMateria *m)
{
	for(int i = 0; i < 4; i++)
	{
		if (_stuff[i] == NULL)
		{
			// std :: cout << _name << " equip a " << m->getType() << " at " << i << " position\n";
			_stuff[i] = m;
			return;
		}
	}
	std::cout << _name << "'s inventory is full !!!" << std::endl;
	for(int i = 0; i < 100; i++)
	{
		if (_stash[i] == NULL)
		{
			_stash[i] = m;
			return;
		}
	}
	delete m;
}


void Character::unequip(int idx)
{
	if (idx <= 3)
	{
		if (_stuff[idx])
		{
			for (int i = 0; i < 100; i++)
			{
				if (_stash[i] == NULL)
				{
					std::cout << _name << " unequip " <<_stuff[idx]->getType() << " at index :" << idx << std::endl;
					_stash [i] = _stuff[idx];
					_stuff[idx] = NULL;
					return ;
				}
			}
		}
	}

}


std::string const &Character ::getName() const
{
	return _name;
}



const AMateria *Character ::GetStuff() const 
{
	return * _stuff;
}

void Character::use(int idx, ICharacter &target)
{
	std::cout << _name <<" ";
	if (_stuff[idx])
		_stuff[idx]->use(target);
	else
		std::cout << "Dont have Materia at this index" << std::endl;
}

Character::Character(const std::string name) : ICharacter()
{

	std::cout << this->_name << " Character Spawn" << std::endl;
	for(int i = 0; i < 4; i++)
		_stuff[i] = NULL;
	for(int i = 0; i < 100; i++)
		_stash[i] = NULL;
	_name = name;
}




Character::Character(const Character& other) : ICharacter()
{
	const AMateria *stuffOther = other.GetStuff();
	std::cout << this->_name << " Character Spawn" << std::endl;
	for (int i = 0; i < 3; i++)
	{
		if (stuffOther != NULL)
		{
			_stuff[i] = stuffOther->clone();
			stuffOther++;
		}
	}
	for(int i = 0; i < 100; i++)
		_stash[i] = NULL;

}

Character::~Character()
{
	for(int i = 0; i < 4; i++)
		delete	_stuff[i] ;
	for(int i = 0; i < 100; i++)
		delete	_stash[i] ;
 	std::cout << this->_name << " Character Has been destroyed" << std::endl;
}