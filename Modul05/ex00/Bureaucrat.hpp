#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat {
    private:
        std::string name;
        int galon;
    public:
        std::string getName() const;
        int getGrade() const;
        void increment(void);
        void decrement(void);
        Bureaucrat& operator=(Bureaucrat const& ob);
        Bureaucrat(void);
        Bureaucrat(Bureaucrat const& ob);
        ~Bureaucrat(void);
        Bureaucrat(std::string _name, int grade);
        std::string GradeTooHighException(void);
        std::string GradeTooLowException(void);
};
std::ostream& operator<<(std::ostream& os, Bureaucrat const& ob);
#endif