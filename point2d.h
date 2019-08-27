#ifndef POINT2D_H
#define POINT2D_H


class Point2D
{
public:
    Point2D();
    Point2D(double x, double y);
    bool operator==(const Point2D& p);

private:
    double _x, _y;
};

#endif // POINT2D_H
