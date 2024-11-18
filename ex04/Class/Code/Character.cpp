#include "Character.hpp"


void Character::equip(AMateria *m)
{
	for(int i = 0; i < 3; i++)
	{
		if (_stuff[i] == NULL)
		{
			_stuff[i] = m;
			break;
		}
	}

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
					_stash [i] = _stuff[idx];
					_stuff[idx] = NULL;
				}
			}
		}
	}

}


std::string&Character ::GetName()
{
	return _name;
}



const AMateria *Character ::GetStuff() const 
{
	return * _stuff;
}

void Character::use(int idx, Character &target)
{
	if (_stuff[idx])
		_stuff[idx]->use(target);
}

Character::Character(const std::string name) : ICharacter()
{
	for(int i = 0; i < 3; i++)
		_stuff[i] = NULL;
	for(int i = 0; i < 100; i++)
		_stash[i] = NULL;
	_name = name;
}


Character::Character(const Character& other) : ICharacter()
{
	const AMateria *stuffOther = other.GetStuff();

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
	delete [] _stash;
}