#include "Span.hpp"

int main()
{
    Span sp = Span(10000);
    for (int i = 1; i <= 5000; i++)
    {
        try
        {
            sp.addNumber(i);
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << '\n';
            break;
        }
    }
    std::vector<int> tab;
    for (int i = 5001; i <= 10000; i++)
        tab.push_back(i);
    try
    {
        sp.addNumber(tab.begin(), tab.end());
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    try
    {
        sp.addNumber(52);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}
