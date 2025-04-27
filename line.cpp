#include <iomanip>
#include "line.hpp"
#include <sstream>
#include <cmath>


Line::Line(Point a, Point b) : p1(a), p2(b) {}

double Line:: length(){
    double x = p1.getX() - p2.getX();
    double y = p1.getY()-p2.getY();
    double length = sqrt(x*x + y*y);
    return length;
}
bool Line:: contains(Point p){
    Line l1(p1,p);
    Line l2(p,p2);
    
    double Temp = l1.length() + l2.length();
    
    if(Temp > length()){
        return false;
    }else{
        return true;
    }
}
 bool Line:: parallel(Line& other){
    if(slope() == other.slope()){
        return true;
    }else{return false;}
}

// Makes a string showing both points of the line.
string Line::toString(){
    stringstream string;
    string << "Point 1: [" << p1.toString() << "], Point 2: [" << p2.toString() << "]";
    return string.str();
}

double Line :: slope(){
    double x = p1.getX() - p2.getX();
    double y = p1.getY()-p2.getY();
    double slope = y/x;
    return slope;
}
bool Line:: intersecting(Line l2){


    //y = mx+b
    double m1 = slope();
    double m2 = l2.slope();
    if (m1 == m2) {return false;} // parallel cant intersect

    double b1 = p1.getY() - m1 * p1.getX();
    double b2 = l2.p1.getY() - m2 * l2.p1.getX();
    //mx+b = mx+b to solve for interection x
    double interx = (b2-b1)/(m1-m2);
    //plug in intersection x for intersection y
    double intery = m1*interx + b1;

    Point tempP(interx,intery);

    if(contains(tempP) && l2.contains(tempP)){
        return true;
    }else{return false;}
}
