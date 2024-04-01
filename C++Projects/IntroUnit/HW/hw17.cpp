/*
Author: Brandon Angos
Course: CSCI-135
Instructor: Tong Yi
Assignment: ex1.7

Program asks for three names and stores each name in a string variable
which then are printed which is seen on lines 24-26.
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string x,y,z;
    cout << "Enter a name of one of your friends: ";
    cin >> x;
    cout << "Enter a name of one of your friends: ";
    cin >> y;
    cout << "Enter a name of one of your friends: ";
    cin >> z;
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;

    return 0;
}