#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{

    Bureaucrat ob2("ob2", 1);
    Bureaucrat ob3("ob3", 150);

    Form *Shrubbery;

    Shrubbery = new ShrubberyCreationForm("name");
    Shrubbery->execute(ob2);
    Shrubbery->beSigned(ob2);
    Shrubbery->execute(ob3);
    Shrubbery->execute(ob2);

    std::cout << std::endl << "--------------------------------------------------------------" << std::endl;


    Form *president;

    president = new PresidentialPardonForm("president");
    president->execute(ob2);
    president->beSigned(ob2);
    president->execute(ob3);
    president->execute(ob2);

    std::cout << std::endl << "--------------------------------------------------------------" << std::endl;


    Form *robot;

    robot = new RobotomyRequestForm("robot");
    robot->execute(ob2);
    robot->beSigned(ob2);
    robot->execute(ob3);
    robot->execute(ob2);

    delete Shrubbery;
    delete robot;
    delete president;
}