#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <string>
class Brain
{
	private :
		std::string ideas[100];
	public:
		void SetIdeas(std:: string& ideas, int index);
		// std::string& GetIdeas(void); 

};

#endif