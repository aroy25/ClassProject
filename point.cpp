#include "point.hpp"
#include <sstream>
#include <iomanip>

//setting up the point with the given values using a list
Point::Point(double x, double y): x(x), y(y) {}

double Point::getX() {
    return x;
}
double Point::getY() {
    return y;
}
string Point::toString() {
    stringstream numbers;
    numbers << fixed << setprecision(1);
    numbers << "X: " << x << ", Y: " << y;
    return numbers.str();
};
