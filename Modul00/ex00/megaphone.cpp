#include <iostream>


int main(int ac, char **arg)
{
    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    for (int i(1); arg[i]; i++)
    {
        for (int y(0); arg[i][y]; y++)
        {
            if (arg[i][y] >= 'a' && arg[i][y] <= 'z')
                arg[i][y] -= 32;
        }
        std::cout << arg[i];
    }
    std::cout << std::endl;
    return (0);
}