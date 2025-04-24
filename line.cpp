#include <iomanip>
#include "line.hpp"
#include <sstream>


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
//bool Line:: parallel(Line& other){}
//bool Line:: intersecting(Line& other){}


// Makes a string showing both points of the line.
string Line::toString(){
    stringstream string;
    string << "Point 1: [" << p1.toString() << "], Point 2: [" << p2.toString() << "]";
    return string.str();
}

double slope(){
    double x = p1.getX() - p2.getX();
    double y = p1.getY()-p2.getY();
    double slope = y/x;
    return slope;
}
bool Line:: Intersect( <#Line l2#>){
    //y = mx+b
    //
    
    double m1 = slope();
    double m2 = l2.slope();
    
    
    
    
}
