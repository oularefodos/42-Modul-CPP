#include <iostream>
#include <string>


template<typename T>
void swap(T &a, T &b)
{
    T s;

    s = b;
    b = a;
    a = s;
}

template<typename T>
T min(T a, T b)
{
    return (a < b ? a : b);
}

template<typename T>
T max(T a, T b)
{
    return (a > b ? a : b);
}