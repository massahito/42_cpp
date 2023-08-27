#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include "Brain.hpp"
#include <iostream>
#include <string>

class	Animal
{
	public:
		Animal();
		virtual ~Animal();
		virtual void	makeSound(void) const;
	protected:
		std::string		type;
	private:
		Brain			*my_brain;
};
#endif
