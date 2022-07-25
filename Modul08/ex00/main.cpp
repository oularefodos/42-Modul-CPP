#include <iostream>
#include <vector>
#include <string.h>
#include "easyfind.hpp"

int check(char *str)
{
    for(int i = 0; str[i]; i++)
        if(!isdigit(str[i]))
            return (0);
    return (1);
}

int main(int ac, char **str)
{
    if (ac == 2 && check(str[1]))
    {
        int value = atoi(str[1]);
        int ret;
        std::vector<int> tab;
        for (int i = 1; i < 20; i++)
            tab.push_back(i*i);
        try
        {
            ret = easyfind(tab, value);
            std::cout << ret << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    return (0);
}