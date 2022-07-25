#include <iostream>
#include<deque>
#include <string>

template <typename T>
int easyfind(T tab, int nb)
{
    typename T::iterator ptr;
    ptr = find(tab.begin(), tab.end(), nb);
    if (ptr == tab.end())
        throw std::out_of_range("Value Not Found");
    return (ptr - tab.begin());
}
