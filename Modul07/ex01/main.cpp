#include "iter.hpp"


void car(int& n)
{
    n *= n;
}

void upper(char& n)
{
    if (islower(n))
        n -= 32;
}

int main(void)
{
    int tab[4] = {0, 1, 2, 4};
    iter(tab, 4, car);

    for (unsigned int i = 0; i < 4; i++)
        std::cout << tab[i] << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
    char msg[6] = "miros";
    iter(msg, 5, upper);
    std::cout << msg << std::endl;
}