#include "RobotomyRequestForm.hpp"
#include <fstream>


// contructor

RobotomyRequestForm::RobotomyRequestForm(void) : Form("file", 72, 45)
{
    target = "file";
}

RobotomyRequestForm::RobotomyRequestForm(std::string _target) : Form(_target, 72, 45)
{
    target = _target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &ob) : Form(ob.getName(), ob.getGradeSigned(), ob.getGradeExec())
{
    target = ob.target;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
}


// The operators
RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const &ob)
{
    this->setName(ob.getName());
    this->setGradeExec(ob.getGradeExec());
    this->setIsSigned(ob.getIsSigned());
    this->setGradeSigned(ob.getGradeSigned());
    target = ob.target;
    return *this;
}


// the methods

void RobotomyRequestForm::execute(Bureaucrat const& executor) const
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
            std::cout << this->target << " has been robotomized successfully 50% of the time" << std::endl;
        }
    }
    catch (const std::string &e)
    {
        std::cout << e << std::endl;
    }
}
