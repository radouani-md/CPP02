#ifndef __POINT_HPP__
#define __POINT_HPP__

#include <iostream>
#include <string.h>
#include "Fixed.hpp"
// #include <fstream>
#include <cmath>

class Point 
{
    private :
        Fixed const x;
        Fixed const y;
    public :
        Point();
        Point(const float x, const float y);
        Point(const Point& obj);
        Point &operator=(const Point &obj);
        ~Point();
        Fixed     getX() const;
        Fixed     getY() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
#endif