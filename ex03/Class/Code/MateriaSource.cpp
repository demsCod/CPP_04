
#include "../Header/MateriaSource.hpp"


MateriaSource::MateriaSource(){
    for (int i = 0; i < 4; i++)
            library[i] = NULL;
	for (int i = 0; i < 400; i++)
            stash[i] = NULL;
}

MateriaSource::~MateriaSource(){
	for (int i = 0; i < 4; i++) {
		if (library[i] != NULL)
			delete library[i];
	}
	for (int i = 0; i < 400; i++)
		delete stash[i];

}

void MateriaSource::learnMateria(AMateria *m)
{
    int i;
    for (i = 0; i < 4; i++)
    {
        if (library[i] ==  NULL)
		{
        	std::cout << "Materia add to the library\n" << std::endl;
			library[i] = m->clone();
            return ;
		}
    }
	std::cout << "Book dont have any place to add this Materia\n";
	for (int j = 0; i < 400; i++)
    {
        if (!stash[j])
        {
            stash[j] = m->clone() ;
            return ;
        }
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (library[i] && library[i]->getType() == type)
            return(library[i]->clone());
    }
    return 0;
}
