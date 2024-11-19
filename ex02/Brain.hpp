#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <string>
class Brain
{
	private :
		std::string ideas[100];
	public:
	 	Brain();
        ~Brain();
		void SetIdeas(std:: string& ideas, int index);
		std::string GetIdeas(int index) const;
		Brain(Brain const &copy);
        Brain& operator=(Brain const &affect);


};

#endif