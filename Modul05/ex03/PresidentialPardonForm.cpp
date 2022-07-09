#include "PresidentialPardonForm.hpp"
#include <fstream>


// contructor

PresidentialPardonForm::PresidentialPardonForm(void) : Form("file", 25, 5)
{
    target = "file";
}

PresidentialPardonForm::PresidentialPardonForm(std::string _target) : Form(_target, 25, 5)
{
    target = _target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &ob) : Form(ob.getName(), ob.getGradeSigned(), ob.getGradeExec())
{
    target = ob.target;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
}


// The operators
PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const &ob)
{
    this->setName(ob.getName());
    this->setGradeExec(ob.getGradeExec());
    this->setIsSigned(ob.getIsSigned());
    this->setGradeSigned(ob.getGradeSigned());
    target = ob.target;
    return *this;
}


// the methods

void PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
    try
    {
        if (this->getIsSigned() == false || executor.getGrade() > this->getGradeExec())
        {
            executor.executeForm(*this);
            const std::string m("the operation failed");
            throw m;
        }
        else
        {
            executor.executeForm(*this);
            std::cout << this->target << " was forgiven by Zaphod Beeblebrox" << std::endl;
        }
    }
    catch (const std::string &e)
    {
        std::cout << e << std::endl;
    }
}
