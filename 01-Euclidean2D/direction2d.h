#ifndef DIRECTION2D_H
#define DIRECTION2D_H

#include <cmath>
#include "vector2d.h"

class Diretion2D {

public:
    Diretion2D(const Vector2D& v)
    {
        double d = std::sqrt(v.x()*v.x() + v.y()*v.y());
        _x = v.x()/d;
        _y = v.y()/d;
    }
private:
    double _x, _y;
};

#endif // DIRECTION2D_H
