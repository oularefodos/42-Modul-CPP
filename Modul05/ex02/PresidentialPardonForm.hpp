#ifndef PresidentialPardonForm_HPP
#define PresidentialPardonForm_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
    private:
        std::string target;
    public:
        PresidentialPardonForm(void);
        PresidentialPardonForm(std::string _target);
        PresidentialPardonForm(PresidentialPardonForm const &ob);
        ~PresidentialPardonForm();
        PresidentialPardonForm& operator=(PresidentialPardonForm const &ob);
        void execute(Bureaucrat const & executor) const;
};


#endif