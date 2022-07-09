#include "Bureaucrat.hpp"


// the Construtors

Bureaucrat::Bureaucrat(void)
{
    this->name = "";
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

std::string Bureaucrat::GradeTooHighException(void)
{
    return "Grade Too High";
}

std::string Bureaucrat::GradeTooLowException(void)
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