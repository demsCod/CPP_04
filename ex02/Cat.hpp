#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{

	private :
		Brain *_brain;
 	public:
		Cat();
		Cat(const Cat& other);
		void makeSound() const;
		Cat& operator=(const Cat& other);
		~Cat();
};

#endif
