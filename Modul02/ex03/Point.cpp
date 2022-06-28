#include "Point.hpp"

// Constructeur de Classe

Point::Point(void) {
    Fixed obj(0);
    x = obj;
    y = obj;
}

Point:: Point(const float _x, const float _y)
{
    Fixed objx(_x);
    Fixed objy(_y);
    x = objx;
    y = objy;
}

Point::Point(Point& obj)
{
    *this = obj;
}

Point& Point::operator=(const Point& obj)
{
    this->x = obj.get_obj_x();
    this->y = obj.get_obj_y();
    return (*this);
}

Point::~Point(void)
{

}

// ALL METHODS

float Point::getx(void) const
{
    return (x.toFloat());
}

Fixed Point::get_obj_x(void) const
{
    return (this->x);
}

Fixed Point::get_obj_y(void) const
{
    return (this->y);
}

float Point::gety(void) const
{
    return (y.toFloat());
}


// Functions  

float power(float x)
{
    return (x * x);
}

float air(float a, float b, float c)
{
    float s;
    s = (a + b + c) / 2;
    return (sqrt(s * (s - a) * (s - b) * (s - c)));
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    float   ab;
    float   ac;
    float   bc;
    float   ap;
    float   bp;
    float   cp;

    float abc;
    float abp;
    float acp;
    float bcp;

    ab = sqrt(power(b.getx() - a.getx()) + power(b.gety() - a.gety()));
    bc = sqrt(power(b.getx() - c.getx()) + power(b.gety() - c.gety()));
    ac = sqrt(power(c.getx() - a.getx()) + power(c.gety() - a.gety()));
    ap = sqrt(power(point.getx() - a.getx()) + power(point.gety() - a.gety()));
    bp = sqrt(power(point.getx() - b.getx()) + power(point.gety() - b.gety()));
    cp = sqrt(power(point.getx() - c.getx()) + power(point.gety() - c.gety()));
    abc = air(ab, bc, ac);
    abp = air(ap, bp, ab);
    bcp = air(cp, bc, bp);
    acp = air(ap, cp, ac);
    if (abc == abp + bcp + acp)
        return true;
    return false;
}