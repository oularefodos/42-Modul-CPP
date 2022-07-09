#ifndef Form_HPP
#define Form_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

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
        void setGradeSigned(int n);
        void setGradeExec(int n);
        void setName(std::string m);
        void setIsSigned(bool n);
        Form& operator=(Form const& ob);
        void beSigned(Bureaucrat const& Bur);
        Form(void);
        Form(Form const& ob);
        virtual ~Form(void);
        Form(std::string _name, int gradeSigned, int gradeExec);
        std::string GradeTooHighException(void) const;
        std::string GradeTooLowException(void) const;
        void virtual execute(Bureaucrat const & executor) const = 0;
};
std::ostream& operator<<(std::ostream& os, Form const& ob);
#endif