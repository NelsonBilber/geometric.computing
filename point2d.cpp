#include "point2d.h"

Point2D::Point2D():_x(0.0), _y(0.0)
{}

Point2D::Point2D(double x, double y):_x(x), _y(y)
{}

bool Point2D::operator==(const Point2D &p)
{
    return (this == &p) || (_x == p._x && _y == p._y);
}

