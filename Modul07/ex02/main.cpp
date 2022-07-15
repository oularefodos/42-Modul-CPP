#include "Array.hpp"

int main(void)
{
    unsigned int size;
    size = 200;
    Array<int> tab(size);
    for (unsigned int i(0); i < size; i++)
    {
        try
        {
            std::cout << tab[i] << std::endl;
        }
        catch(std::string e)
        {
            std::cout << e << std::endl;
        }
    }

    for (unsigned int i(0); i < size; i++)
        tab[i] = i;
    for (unsigned int i(0); i < size; i++)
    {
        try
        {
            std::cout << tab[i] << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    std::cout << std::endl <<  "----------------------------------------------------" << std::endl;
    size = 127;
    Array<char> str(size - 32);
    int y = 0;
    for (unsigned int i(32); i < size; i++)
        str[y++] = static_cast<char>(i);
    for (unsigned int x(0); x < size - 32; x++)
    {
        try
        {
            std::cout << str[x] << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }

    try
    {
        std::cout << str[-2] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        std::cout << str[800] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}