#ifndef RobotomyRequestForm_HPP
#define RobotomyRequestForm_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
    private:
        std::string target;
    public:
        RobotomyRequestForm(void);
        RobotomyRequestForm(std::string _target);
        RobotomyRequestForm(RobotomyRequestForm const &ob);
        ~RobotomyRequestForm();
        RobotomyRequestForm& operator=(RobotomyRequestForm const &ob);
        void execute(Bureaucrat const & executor) const;
};


#endif