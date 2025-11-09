#include "Point.hpp"

Fixed calculateArea(Point const &a, Point const &b, Point const &c)
{
    Fixed aa;
    aa = (a.getX() * (b.getY() - c.getY()) +
          b.getX() * (c.getY() - a.getY()) +
          c.getX() * (a.getY() - b.getY()));
    if (aa < 0)
        aa = aa * (-1);
    return (aa);
}


bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed ABC = calculateArea(a, b, c);
    Fixed A = calculateArea(point, b, c);
    Fixed B = calculateArea(a, point, c);
    Fixed C = calculateArea(a, b, point);

    if (A == 0 || B == 0 || C == 0)
        return (false);

    return (ABC == A + B + C);
}