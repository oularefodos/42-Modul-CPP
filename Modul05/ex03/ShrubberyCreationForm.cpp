#include "ShrubberyCreationForm.hpp"
#include <fstream>


// contructor

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("file", 145, 137)
{
    target = "file";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target) : Form(_target, 145, 137)
{
    target = _target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &ob) : Form(ob.getName(), ob.getGradeSigned(), ob.getGradeExec())
{
    target = ob.target;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}


// The operators
ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &ob)
{
    this->setName(ob.getName());
    this->setGradeExec(ob.getGradeExec());
    this->setIsSigned(ob.getIsSigned());
    this->setGradeSigned(ob.getGradeSigned());
    target = ob.target;
    return *this;
}


// the methods

void ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
    try
    {
        if (this->getIsSigned() == false)
        {
            executor.executeForm(*this);
            const std::string m("This file is not signed");
            throw m;
        }
        else if (executor.getGrade() > this->getGradeExec())
        {
            executor.executeForm(*this);
            throw this->GradeTooLowException();
        }
        else
        {
            executor.executeForm(*this);
            std::string fileName = target + "_shrubbery";
            std::ofstream outfile(fileName);

            outfile << 
        "                                    .\n"
        "                                      .         ;\n"
        "         .              .              ;%     ;; \n"
        "           ,           ,                :;%  %;   \n"
        "            :         ;                   :;%;'     .,   \n"
        "   ,.        %;     %;            ;        %;'    ,;\n"
        "     ;       ;%;  %%;        ,     %;    ;%;    ,%'\n"
        "      %;       %;%;      ,  ;       %;  ;%;   ,%;' \n"
        "       ;%;      %;        ;%;        % ;%;  ,%;'\n"
        "        `%;.     ;%;     %;'         `;%%;.%;'\n"
        "         `:;%.    ;%%. %@;        %; ;@%;%'\n"
        "            `:%;.  :;bd%;          %;@%;'\n"
        "              `@%:.  :;%.         ;@@%;'  \n" 
        "                `@%.  `;@%.      ;@@%;    \n"     
        "                  `@%%. `@%%    ;@@%;     \n"   
        "                    ;@%. :@%%  %@@%;      \n" 
        "                      %@bd%%%bd%%:;     \n"
        "                        #@%%%%%:;;\n"
        "                        %@@%%%::;\n"
        "                        %@@@%(o);  . '    \n"     
        "                        %@@@o%;:(.,'     \n"    
        "                    `.. %@@@o%::;       \n"  
        "                       `)@@@o%::;       \n"  
        "                        %@@(o)::;       \n" 
        "                       .%@@@@%::;        \n" 
        "                       ;%@@@@%::;.       \n"   
        "                      ;%@@@@%%:;;;. \n"
        "                  ...;%@@@@@%%:;;;;,..    Gilo97 "<< std::endl;
        }
    }
    catch (const std::string &e)
    {
        std::cout << e << std::endl;
    }
}
