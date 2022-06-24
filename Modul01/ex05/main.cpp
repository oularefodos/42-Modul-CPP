#include "Harl.hpp"

int main()
{
    Harl ob;

    std::cout << std::endl << "***************************************************************" << std::endl << std::endl;
    ob.complain("debug");
    std::cout << std::endl << "***************************************************************" << std::endl << std::endl;
    ob.complain("info");
    std::cout << std::endl << "***************************************************************" << std::endl << std::endl;
    ob.complain("warning");
    std::cout << std::endl << "***************************************************************" << std::endl << std::endl;
    ob.complain("error");
    std::cout << std::endl << "***************************************************************" << std::endl << std::endl;
}