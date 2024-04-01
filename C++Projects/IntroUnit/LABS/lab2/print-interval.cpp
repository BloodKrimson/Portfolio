/*
Author: Brandon Angos
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab2B

Description: program will ask for lower limit, int L, and upper one, int U,
which will then be used to print out the numbers from [L,U) through the help of
a while loop. 

*/

#include <iostream>
using namespace std;
int main(){
    int L, U;
    cout << "Enter an integer for L : ";
    cin >> L;
    cout << "Now enter one for U: ";
    cin >> U;
    cout << endl;
    while(L<U){
        cout << L << " ";
        L++;
    }
    cout << endl;
    return 0;
}