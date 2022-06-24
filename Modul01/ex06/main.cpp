#include "Harl.hpp"

int findNum(char *str)
{
    std::string words[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; i++)
        if (str == words[i])
            return (i);
    return (-1);
}

int main(int ac, char **arg)
{
    int i;

    Harl ob;

    if (ac != 2)
    {
        std::cout << "ERROR: invalid argument" << std::endl;
        return (0);
    }
    if ((i = findNum(arg[1])) != -1)
    {
        switch (i)
        {
            case 0:
                ob.complain("debug");
                std::cout << std::endl;
            case 1:
                ob.complain("info");
                std::cout << std::endl;
            case 2:
                ob.complain("warning");
                std::cout << std::endl;
            case 3:
                ob.complain("error");
                std::cout << std::endl;
            break;
        }
    }
    else
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    return (0);
}