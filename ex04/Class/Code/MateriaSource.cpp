
#include "../Header/MateriaSource.hpp"


MateriaSource::MateriaSource(){
    for (int i = 0; i < 4; i++)
    {
            library[i] = NULL;
    }
}

MateriaSource::~MateriaSource(){
  // delete [] *library;
    //delete [] *stash;

}

void MateriaSource::learnMateria(AMateria *m)
{
    int i;
    for (i = 0; i < 4; i++)
    {
        if (library[i] != NULL)
        {
            if (library[i]->getType() == m->getType())
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
        if (library[i] ==  NULL)
            break;
    }
    if (i < 4)
    {
        std::cout << "Materia had to library\n" << std::endl;
        library[i] = m ;
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
