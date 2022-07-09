#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
	types[0] = "robotomy request";
	types[1] = "presidential pardon";
	types[2] = "shrubbery creation";
}

Intern::Intern( const Intern & src )
{
	(void)src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &				Intern::operator=( Intern const & rhs )
{
	(void)rhs;
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

Form* Intern::makeForm(std::string type, std::string name)
{

	int i;
	std::string error("Invalid element");
	Form *m;

	i = 0;
	for (i = 0; (i < 3 && type != types[i]); i++);
	switch (i)
	{
		case 0:
			m = new RobotomyRequestForm(name);
			break;
		case 1:
			m =  new PresidentialPardonForm(name);
			break;
		case 2:
			m = new ShrubberyCreationForm(name);
			break;
		case 3:
			break;
	}
	return i < 3 ? m : throw error;
}
