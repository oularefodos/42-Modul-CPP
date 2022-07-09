#include "Bureaucrat.hpp"
#include "Form.hpp"


// the Construtors

Bureaucrat::Bureaucrat(void)
{
    this->name = "inconnu";
    this->galon = 150;
}

Bureaucrat::Bureaucrat(Bureaucrat const& ob)
{
    name = ob.name;
    galon = ob.galon;
}

Bureaucrat::~Bureaucrat(void)
{
}

Bureaucrat::Bureaucrat(std::string _name, int grade)
{
    try
    {
        if (grade > 150)
            throw Bureaucrat::GradeTooLowException();
        else if (grade < 1)
            throw Bureaucrat::GradeTooHighException();
        else
        {
            galon = grade;
            name = _name;
        }
    }
    catch(const std::string& e)
    {
        std::cerr << e << std::endl;
    }
}

// the Operators

Bureaucrat& Bureaucrat::operator=(Bureaucrat const& ob)
{
    name = ob.name;
    galon = ob.galon;
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat &ob)
{
    os << ob.getName() << ", bureaucrat grade " << ob.getGrade() << std::endl;
    return os;
}

// All methods

std::string Bureaucrat::getName(void) const
{
    return name;
}

int Bureaucrat::getGrade(void) const
{
    return galon;
}

std::string Bureaucrat::GradeTooHighException(void) const
{
    return "Grade Too High";
}

std::string Bureaucrat::GradeTooLowException(void) const
{
    return "Grade too Low";
}

void Bureaucrat::increment(void)
{
    try
    {
        if (galon == 1)
            throw Bureaucrat::GradeTooHighException();
        else
            galon--;
    }
    catch(const std::string& e)
    {
        std::cerr << e << std::endl;
    }
}

void Bureaucrat::decrement(void)
{
    try
    {
        if (galon == 150)
            throw Bureaucrat::GradeTooLowException();
        else
            galon++;
    }
    catch(const std::string& e)
    {
        std::cerr << e << std::endl;
    }
}

void Bureaucrat::signForm(bool isSigned, std::string _name, std::string raison) const
{
    if (isSigned)
        std::cout << name << " signed " << _name << std::endl;
    else 
    {   
        std::cout << name << " couldn’t sign " << _name << " beacause ";
        std::cout << raison << std::endl;
    }
}

void Bureaucrat::executeForm(Form const& form) const
{
    if (form.getGradeExec() < this->galon)
        std::cout << "The Bureaucrat could'nt execute this Form Because " << GradeTooLowException() << std::endl;
    else if (form.getIsSigned() == false)
        std::cout << "The Bureaucrat could'nt execute this Form Because " << "is not signed" << std::endl;
    else
        std::cout << name << " executed " << form.getName() << std::endl;
}