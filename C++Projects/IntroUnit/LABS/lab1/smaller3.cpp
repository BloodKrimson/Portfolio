/*
Author: Brandon Angos
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab1B

Description: 
The smaller3.cpp program is similar to the smaller.cpp program just
that this time your comparing 3 integers. For this one I just created an int array which will be 
modified using the while loop in order to input the user's input into each element of the array, 
they'll be asked to do this 3 times for the 3 numbers we will be comparing.
after that I use the min function and compared each of the ints in the array to find 
the smallest one and since it's only 3 I just used min function twice and initialized the return
value into variable f(int). If the array was bigger than I would have used a loop for or while to 
transverse through the array.
*/

#include <iostream>
using namespace std;

int main(){
    int i = 0;
    int a[3];
    while(i<3){
        cout << "ENter a number: ";
        cin >> a[i];
        i++;
    }
    int f= min(a[0],a[1]);
    f = min(f, a[2]);
    cout << "The smaller of the three is " << f << "\n";
    return 0;
}