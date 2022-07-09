#ifndef Form_HPP
#define Form_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
class Form {
    private:
        std::string name;
        int galonSigned;
        int galonExec;
        bool isSigned;
    public:
        std::string getName() const;
        int getGradeSigned() const;
        int getGradeExec() const;
        bool getIsSigned() const;
        Form& operator=(Form const& ob);
        void beSigned(Bureaucrat const& Bur);
        Form(void);
        Form(Form const& ob);
        ~Form(void);
        Form(std::string _name, int gradeSigned, int gradeExec);
        std::string GradeTooHighException(void);
        std::string GradeTooLowException(void);
};
std::ostream& operator<<(std::ostream& os, Form const& ob);
#endif