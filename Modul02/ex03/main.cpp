#include "Fixed.hpp"
#include "Point.hpp"

int main( void ) 
{
    Point a(0, 0);
    Point b(0, 1);
    Point c(1, 1);
    Point x;
    Point p(0.8, 1);
    std::cout << bsp(a, b, c, p) << std::endl;
    return (0);
}