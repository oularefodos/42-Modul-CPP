#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class Intern
{
	private:
		std::string types[3];
	public:

		Intern();
		Intern( Intern const & src );
		~Intern();
		Intern &		operator=( Intern const & rhs );
		Form* makeForm(std::string type, std::string name);

};

#endif /* ********************************************************** INTERN_H */