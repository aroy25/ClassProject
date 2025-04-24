#pragma once
#include <string>

using namespace std;

class Point{
public:
    Point(double x, double y);
    string toString();
    
    double getX();
    double getY();
    
private:
    double x, y;
};
