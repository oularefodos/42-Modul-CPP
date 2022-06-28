#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include "Fixed.hpp"

class Point {
    private:
        Fixed x;
        Fixed y;
    
    public:
        Point(void);
        Point(const float _x, const float _y);
        Point (Point& obj);
        Point& operator=(const Point &obj);
        float getx(void) const;
        float gety(void) const;
        Fixed get_obj_x(void) const;
        Fixed get_obj_y(void) const;
        ~Point(void);
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif