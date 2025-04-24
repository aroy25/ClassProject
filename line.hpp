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
    bool intersecting(Line& other);
    string toString();
    
private:
    Point p1, p2;
    double slope();
    double cross(Point a, Point b, Point c);
};
