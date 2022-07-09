#include "Form.hpp"


// the Construtors

Form::Form(void)
{
    this->name = "inconnu";
    this->isSigned = false;
    this->galonSigned = 75;
    this->galonExec = 75;
}

Form::Form(Form const& ob)
{
    name = ob.name;
    galonSigned = ob.galonSigned;
    galonExec = ob.galonExec;
    isSigned = ob.isSigned;
}

Form::~Form(void)
{
}

Form::Form(std::string _name, int gradeSigned, int gradeExec)
{
    try
    {
        if (gradeExec > 150 || gradeSigned > 150)
            throw Form::GradeTooLowException();
        else if (gradeExec < 1 || gradeSigned < 1)
            throw Form::GradeTooHighException();
        else
        {
            galonExec = gradeExec;
            galonSigned = gradeSigned;
            isSigned = false;
            name = _name;
        }
    }
    catch(const std::string& e)
    {
        std::cerr << e << std::endl;
    }
}

// the Operators

Form& Form::operator=(Form const& ob)
{
    name = ob.name;
    galonSigned = ob.galonSigned;
    galonExec = ob.galonExec;
    isSigned = ob.isSigned;
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Form &ob)
{
    os << "name : " << ob.getName() << ", Grade require to signed : " << ob.getGradeSigned();
    os << ", Grade require to execut : " << ob.getGradeExec();
    os << ", status: " << ob.getIsSigned() << std::endl;
    return os;
}

// All methods

std::string Form::getName(void) const
{
    return name;
}

int Form::getGradeSigned(void) const
{
    return galonSigned;
}

int Form::getGradeExec(void) const
{
    return galonExec;
}

bool Form::getIsSigned() const
{
    return isSigned;
}

std::string Form::GradeTooHighException(void) const
{
    return "Grade Too High";
}

void Form::setGradeExec(int n)
{
    this->galonExec = n;
}

void Form::setGradeSigned(int n)
{
    this->galonSigned = n;
}

void Form::setName(std::string m)
{
    this->name = m;
}

void Form::setIsSigned(bool n)
{
    this->isSigned = n;
}

std::string Form::GradeTooLowException(void) const
{
    return "Grade too Low";
}

void Form::beSigned(Bureaucrat const& bur)
{
    try
    {
        if (bur.getGrade() > galonSigned)
        {
            bur.signForm(false, name, Form::GradeTooLowException());
            throw Form::GradeTooLowException();
        }
        else
        {
            bur.signForm(true, name, "");
            isSigned = true;
        }
    }
    catch(const std::string& e)
    {
        std::cerr << e << std::endl;
    }
    
}