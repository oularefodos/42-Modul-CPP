#include "Fixed.hpp"
#include "Point.hpp"

int main( void ) 
{
    Point a(0, 0);
    Point b(1, 0);
    Point c(0, 1);
    Point p(0.3f, 0.3f);
    std::cout << bsp(a, b, c, p) << std::endl;
    return (0);
}