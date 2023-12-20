#ifndef	INTERN_HPP
#define	INTERN_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class	Intern
{
	public:
		Intern();
		Intern(Intern const &intern);
		~Intern();
		AForm	*makeForm(std::string const &class_name, std::string const &target);
		Intern	&operator=(Intern const &intern);
	private:
		int							getForhighestdex(std::string const &form_name);
		static int const			num_of_forms = 3;
		static std::string const	form_book_[num_of_forms];
};
#endif
