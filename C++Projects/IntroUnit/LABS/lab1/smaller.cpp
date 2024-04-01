/*
Author: Brandon Angos
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab1A

Description: 
for smaller.cpp program I declared 2 int variables, a and b, 
which will be later initialized by the user's response to lines 21 and 23.
After initiializing the variables I used the min function and initialoized it into 
int s. The min function just finds which integer out of the 2 that is put into the function's parameters is the
smaller interger.Line 26 just prints out which of the 2 integers is the smallest. It works
for both negative and positive integers.
*/

#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout << "enter the first number: ";
    cin >> a;
    cout << "enter the second number: ";
    cin >> b;
    int s = min(a,b);
    cout << "The smaller of the two is " << s << "\n";
    return 0;
}

