#include "Point.hpp"

Point::Point(): x(0), y(0) {}

Point::Point(const float x, const float y) : x(x), y(y) {}

Point::Point(const Point& obj): x(obj.x), y(obj.y) {}

Point::~Point()
{
    // std::cout << "Destractor Called" << std::endl;
}

Point &Point::operator=(const Point &obj)
{
    new (this) Point(obj);
    return (*this);
}

Fixed   Point::getX() const
{
    return (x);
}
Fixed   Point::getY() const
{
    return (y);
}