#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat ob("name", 0);
    Bureaucrat ob1("name2", 1502);

    Bureaucrat ob2("ob2", 1);
    Bureaucrat ob3("ob3", 150);

    std::cout << ob2;
    std::cout << ob3;

    ob2.increment();
    ob3.decrement();
}