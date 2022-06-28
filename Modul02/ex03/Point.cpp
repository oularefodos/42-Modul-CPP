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


