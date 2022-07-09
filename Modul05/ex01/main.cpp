#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{

    Bureaucrat ob2("ob2", 1);
    Bureaucrat ob3("ob3", 150);
    Form form1("form1", 42, 52);
 

    std::cout << form1;

    form1.beSigned(ob2);

    std::cout << form1;

    form1.beSigned(ob3);

    std::cout << "--------------------------------------------------------------" << std::endl;
    Form form3("form1", 42, 190);
    Form form2("form1", 190, 42);
}