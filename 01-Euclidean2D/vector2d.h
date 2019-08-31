#ifndef VECTOR2D_H
#define VECTOR2D_H

#include "point2d.h"

class Vector2D {

public:
    Vector2D() = default;
    Vector2D(double x, double y):_x(x), _y(y){}

    double x() const {return _x;}
    double y() const {return _y;}

    bool operator==(const Vector2D& v) const {
        return (this == &v) ||
                (_x == v._x) && (_y == v._y);
    }

    bool operator!=(const Vector2D& v) const {
        return ! operator==(v);
    }

    Point2D operator+(const Vector2D&  v)
    {
        return Point2D(x()+v.x(), y()+v.y());
    }

    Point2D operator-(const Point2D& p2)
    {
        return Point2D(x()-p2.x(), y()-p2.y());
    }

    Vector2D operator*(double d)
    {
        return Vector2D(d * x(), d * y());
    }

    Vector2D operator/(double d)
    {
        return Vector2D(x() / d, y() / d);
    }

private:
    double _x;
    double _y;

};

#endif // VECTOR2D_H
