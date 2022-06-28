// Functions  
#include "Fixed.hpp" 
#include "Point.hpp"
#define ABS(X) (X) > 0 ? (X) : -(X)

Fixed air(Point const &a, Point const &b, Point const &c)
{
    Fixed s;
    s = Fixed(ABS(a.getx() * (b.gety() - c.gety())
        - b.getx() * (a.gety() - c.gety())
        + c.getx() * (a.gety() - b.gety())));
    return (s);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed abc = air(a, b, c);
    Fixed abp = air(a, b, point);
    Fixed bcp = air(b, c, point);
    Fixed acp = air(a, c, point);
    Fixed zero = 0;
    return (abp != zero && acp != zero && bcp != zero && (abc == abp + bcp + acp));
}