#ifndef SEGMENT2D_H
#define SEGMENT2D_H

#include "point2d.h"

class Segment2d {

public:
    Segment2d() = default;
    Segment2d(const Point2D& source, const Point2D& target):_source(source), _target(target)
    {}
    Point2D source() { return _source; }
    Point2D target() { return _target; }

private:
    Point2D _source;
    Point2D _target;
};

#endif // SEGMENT2D_H
