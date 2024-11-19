
#include "Include.hpp"


int main(void) {

	std :: cout << "---------------------------------INIT MATERIA HALF ICE HALF CURE---------------------------------" <<std::endl;
  	AMateria *Items[50];
	for (int i = 0; i < 50; i++)
	{
		if (i % 2)
			Items[i] = new Ice();
		else
			Items[i] = new Cure();
	}
	std :: cout << "-------------------------------------------INIT MATERIASOURCE-----------------------------------------------------" <<std::endl;
	IMateriaSource *Book[5];
	for (int i = 0; i < 5; i++)
		Book[i] = new MateriaSource();
	//fill the class
 	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 50; j++)
			Book[i]->learnMateria(Items[j]);
	}
	std :: cout << "---------------------------------INIT CHARACTER-------------------------------------------------------------------" <<std::endl;
	ICharacter *p1 = new Character("PLAYER 1");
	ICharacter *p2 = new Character("PLAYER 2");
	ICharacter *p3 = new Character("PLAYER 3");
	std :: cout << "---------------------------------EQUIP CHARACTER --------------------------------------------------------" <<std::endl;
	p1->equip(Book[0]->createMateria("ice"));
	p2->equip(Book[0]->createMateria("ice"));
	p3->equip(Book[0]->createMateria("ice"));
	std :: cout << "---------------------------------CHARACTER USING first MATERIA-----------------------------------------------------" <<std::endl;
	p1->use(0, *p2);
	p2->use(0, *p3);
	p3->use(0, *p1);
	std :: cout << "---------------------------------CHARACTER USING second MATERIA(empty)----------------------------------------------" <<std::endl;
	p1->use(1, *p2);
	p2->use(1, *p3);
	p3->use(1, *p1);
	std :: cout << "---------------------------------EQUIP CHARACTER IN MAETRIASOURCE---------------------------------------------------" <<std::endl;
	p1->equip(Book[0]->createMateria("cure"));
	p2->equip(Book[0]->createMateria("cure"));
	p3->equip(Book[0]->createMateria("cure"));
	std :: cout << "----------------------------------CHARACTER USING second MATERIA--------------------------------------------------" <<std::endl;
	p1->use(1, *p2);
	p2->use(1, *p3);
	p3->use(1, *p1);
	std :: cout << "-----------------------------------CHARACTER FILL HIS STUFF---------------------------------------------------------" <<std::endl;
	p1->equip(Book[0]->createMateria("ice"));
	p2->equip(Book[0]->createMateria("ice"));
	p3->equip(Book[0]->createMateria("ice"));
	p1->equip(Book[1]->createMateria("cure"));
	p2->equip(Book[1]->createMateria("cure"));
	p3->equip(Book[1]->createMateria("cure"));
	p1->equip(Book[1]->createMateria("ice"));
	p2->equip(Book[1]->createMateria("ice"));
	p3->equip(Book[1]->createMateria("ice"));
	p1->equip(Book[2]->createMateria("cure"));
	p2->equip(Book[2]->createMateria("cure"));
	p3->equip(Book[2]->createMateria("cure"));
	p1->equip(Book[2]->createMateria("ice"));
	p2->equip(Book[2]->createMateria("ice"));
	p3->equip(Book[2]->createMateria("ice"));
	p1->equip(Book[3]->createMateria("cure"));
	p2->equip(Book[3]->createMateria("cure"));
	p3->equip(Book[3]->createMateria("cure"));
	p1->equip(Book[3]->createMateria("ice"));
	p2->equip(Book[3]->createMateria("ice"));
	p3->equip(Book[3]->createMateria("ice"));
	p1->equip(Book[4]->createMateria("cure"));
	p2->equip(Book[4]->createMateria("cure"));
	p3->equip(Book[4]->createMateria("cure"));
	p1->equip(Book[4]->createMateria("ice"));
	p2->equip(Book[4]->createMateria("ice"));
	p3->equip(Book[4]->createMateria("ice"));
	std :: cout << "-----------------------------------CHARACTER use ALL their MATERIA----------------------------------------------" <<std::endl;
	for (int i = 0; i < 4; i++)
	{
		p1->use(i, *p2);
		p2->use(i, *p3);
		p3->use(i, *p1);	
	}
	std :: cout << "---------------------------------CHARACTER unequip ALL their MATERIA----------------------------------------------" <<std::endl;
	for (int i = 0; i < 4; i++)
	{
		p1->unequip(i);
		p2->unequip(i);
		p3->unequip(i);
	}
	std :: cout << "-----------------------------------CHARACTER REFILL HIS STUFF---------------------------------------------------------" <<std::endl;
	p1->equip(Book[0]->createMateria("ice"));
	p2->equip(Book[0]->createMateria("ice"));
	p3->equip(Book[0]->createMateria("ice"));
	p1->equip(Book[1]->createMateria("cure"));
	p2->equip(Book[1]->createMateria("cure"));
	p3->equip(Book[1]->createMateria("cure"));
	p1->equip(Book[1]->createMateria("ice"));
	p2->equip(Book[1]->createMateria("ice"));
	p3->equip(Book[1]->createMateria("ice"));
	p1->equip(Book[2]->createMateria("cure"));
	p2->equip(Book[2]->createMateria("cure"));
	p3->equip(Book[2]->createMateria("cure"));
	p1->equip(Book[2]->createMateria("ice"));
	p2->equip(Book[2]->createMateria("ice"));
	p3->equip(Book[2]->createMateria("ice"));
	p1->equip(Book[3]->createMateria("cure"));
	p2->equip(Book[3]->createMateria("cure"));
	p3->equip(Book[3]->createMateria("cure"));
	p1->equip(Book[3]->createMateria("ice"));
	p2->equip(Book[3]->createMateria("ice"));
	p3->equip(Book[3]->createMateria("ice"));
	p1->equip(Book[4]->createMateria("cure"));
	p2->equip(Book[4]->createMateria("cure"));
	p3->equip(Book[4]->createMateria("cure"));
	p1->equip(Book[4]->createMateria("ice"));
	p2->equip(Book[4]->createMateria("ice"));
	p3->equip(Book[4]->createMateria("ice"));
	std :: cout << "---------------------------------CHARACTER REunequip ALL their MATERIA----------------------------------------------" <<std::endl;
	for (int i = 0; i < 4; i++)
	{
		p1->unequip(i);
		p2->unequip(i);
		p3->unequip(i);
	}
	std :: cout << "---------------------------------------------DESTRUCTION----------------------------------------------------------" <<std::endl;	
	delete p3;
	delete p2;
	delete p1;
	// for (int i = 0; i < 2; i++)
	// 	Book[i]->createMateria("cure");
	for (int i = 0; i < 5; i++) {
		delete Book[i];
	}
	for (int i = 0; i < 50; i++)
		delete Items[i];
}