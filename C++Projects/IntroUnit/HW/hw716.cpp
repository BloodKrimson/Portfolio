/*
Author: Brandon Angos
Course: CSCI-135
Instructor: Tong Yi
Assignment: ex7.16
*/

#include <iostream>
#include <cmath>
using namespace std;


struct Point{
    double x, y;
};

double distance(Point a, Point b){
    return sqrt(pow((b.x-a.x),2)+pow((b.y-a.y),2));
}

int main(){
    Point a, b;
    a.x = 4.1;
    a.y = 5;
    b.x = 7;
    b.y = 3.1;
    cout << "Distance from point a to point b is: " << distance(a, b) << endl;
    return 0;
}