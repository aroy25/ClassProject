#pragma once
#include "point.hpp"
#include <string>

using namespace std;

class Line {
public:
    Line(Point a, Point b);
    double length();
    bool contains(Point p);
    bool parallel(Line& other);
    string toString();
    bool intersecting(Line l2);
    
private:
    Point p1, p2;
    double slope();
};
