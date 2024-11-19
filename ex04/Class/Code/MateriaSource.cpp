
#include "../Header/MateriaSource.hpp"


MateriaSource::MateriaSource(){}

MateriaSource::~MateriaSource(){}

void MateriaSource::learnMateria(AMateria *m)
{
    int i;
    for (i = 0; i < 4; i++)
    {
        if (library[i] && library[i]->getType() == m->getType())
        {
            std::cout << m->getType() << " has already learn\n";
            for (int j = 0; i < 400; i++)
            {
                if (!stash[j])
                {
                    stash[j] = m ;
                    return ;
                }
            }
        }
    }
    if (i < 4)
        library[i] = m ;
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
