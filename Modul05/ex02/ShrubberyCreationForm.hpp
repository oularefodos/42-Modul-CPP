#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
    private:
        std::string target;
    public:
        ShrubberyCreationForm(void);
        ShrubberyCreationForm(std::string _target);
        ShrubberyCreationForm(ShrubberyCreationForm const &ob);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm& operator=(ShrubberyCreationForm const &ob);
        void execute(Bureaucrat const & executor) const;
};


#endif