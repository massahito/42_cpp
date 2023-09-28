#ifndef	PRESIDENTIALPARDON_HPP	
#define PRESIDENTIALPARDON_HPP	
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class	PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm const &form);
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm();	
		PresidentialPardonForm &operator=(PresidentialPardonForm const &form);
		void		execute(Bureaucrat const &executor);
};

#endif
