/*
Author: Brandon Angos
Course: CSCI-135
Instructor: Tong Yi
Assignment: ex7.18
*/

#include <iostream>
#include <cmath>
using namespace std;


struct Point{
    double x, y;
};
struct Triangle{
    Point a, b, c;
};

double distance(Point a, Point b){
    return sqrt(pow((b.x-a.x),2)+pow((b.y-a.y),2));
}
double perimeter(Triangle a){
    return distance(a.a, a.b) + distance(a.b,a.c) + distance(a.c,a.a);
}

int main(){
    Triangle o;
    o.a.x = 5.2;
    o.a.y = 3.53;
    o.b.x = 7.2;
    o.b.y = 10.2;
    o.c.x = 8.3;
    o.c.y = 15.4;
    // cout << o.c.y << endl;
    
    // cout << "Distance from point a to point b is: " << distance(o.a, o.c) << endl;
    cout << "Perimeter of triangle o is : " << perimeter(o) << endl;
    return 0;
}