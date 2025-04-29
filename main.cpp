#include <iostream>
#include <assert.h>
#include "point.hpp"
#include "line.hpp"

using namespace std;

int main() {
    //changes(debugging)
    
    // Testin the  Point
    Point p1(1.2, 3.4);
    Point p2(-5.6, 7.8);
    assert(p1.toString() == "X: 1.2, Y: 3.4");
    assert(p2.toString() == "X: -5.6, Y: 7.8");

    // Testing  Line
    Line l1(p1, p2);
    assert(l1.toString() == "Point 1: [X: 1.2, Y: 3.4], Point 2: [X: -5.6, Y: 7.8]");

    // Length
    double len = l1.length();
    assert(len > 0);

    // Contains
    Point middle((p1.getX() + p2.getX()) / 2, (p1.getY() + p2.getY()) / 2);
    assert(l1.contains(middle));

    // Parallel test
    Line l2(Point(0, 0), Point(1, 1));
    Line l3(Point(2, 2), Point(3, 3));
    assert(l2.parallel(l3));

    // Intersection test
    Line l4(Point(0, 0), Point(4, 4));
    Line l5(Point(0, 4), Point(4, 0));
    assert(l4.intersecting(l5));

    cout << "All the test have passed" << endl;
    return 0;
}
