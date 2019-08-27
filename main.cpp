#include <iostream>
#include <cassert>

#include "point2d.h"

using namespace std;

void TestPointEquality()
{
    Point2D A(2,8);
    Point2D B(2,8);
    Point2D & C = B;

    assert( A == B );
    assert( B == C );

}

int main(int argc, const char * argv[])
{
    TestPointEquality();

    std::cout << "All Tests OK ... !" << std::endl;

    return 0;
}
