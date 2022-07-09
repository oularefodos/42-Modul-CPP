#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{

    Bureaucrat ob2("ob2", 1);
    Bureaucrat ob3("ob3", 150);
    Intern intern;

    Form *Shrubbery;
    try
    {
        Shrubbery = intern.makeForm("shrubbery creation", "Shrubebery");
        Shrubbery->execute(ob2);
        Shrubbery->beSigned(ob2);
        Shrubbery->execute(ob3);
        Shrubbery->execute(ob2);
    }
    catch (std::string const &e)
    {
        std::cout << e << std::endl;
    }


    std::cout << std::endl << "--------------------------------------------------------------" << std::endl;


    Form *president;
    try
    {
        president =  intern.makeForm("presidential pardon", "president");
        president->execute(ob2);
        president->beSigned(ob2);
        president->execute(ob3);
        president->execute(ob2);
    }
    catch (std::string const &e)
    {
        std::cout << e << std::endl;
    }

  

    std::cout << std::endl << "--------------------------------------------------------------" << std::endl;


    Form *robot;

    try
    {
        robot = intern.makeForm("robotomy request", "robot");
        robot->execute(ob2);
        robot->beSigned(ob2);
        robot->execute(ob3);
        robot->execute(ob2);
    }
    catch(const std::string& e)
    {
        std::cout << e << std::endl;
    }

    std::cout << std::endl << "--------------------------------------------------------------" << std::endl;
    
    Form *err;
    try
    {
        err = intern.makeForm("robomy request", "robot");
        err->beSigned(ob2);
        err->execute(ob2);
    }
    catch(const std::string& e)
    {
        std::cout << e << std::endl;
    }

    delete err;
    delete Shrubbery;
    delete robot;
    delete president;
}