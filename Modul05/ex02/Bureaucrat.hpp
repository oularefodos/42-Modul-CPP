#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Form;

class Bureaucrat {
    private:
        std::string name;
        int galon;
    public:
        std::string getName() const;
        int getGrade() const;
        void increment(void);
        void decrement(void);
        void signForm(bool isSigned, std::string _name, std::string raison) const;
        Bureaucrat& operator=(Bureaucrat const& ob);
        Bureaucrat(void);
        Bureaucrat(Bureaucrat const& ob);
        ~Bureaucrat(void);
        Bureaucrat(std::string _name, int grade);
        std::string GradeTooHighException(void) const;
        std::string GradeTooLowException(void) const;
        void executeForm(Form const & form) const;
};
std::ostream& operator<<(std::ostream& os, Bureaucrat const& ob);
#endif