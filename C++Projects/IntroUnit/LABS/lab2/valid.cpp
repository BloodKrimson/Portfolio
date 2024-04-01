/*
Author: Brandon Angos
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab2A

Description: program will ask user to enter an integer within the range (0,100)
and will then print out the squared value of the input. This will only happen once the condition
mentioned earlier is met.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int user;
    cout << " Enter an integer from (0,100): ";
    cin >> user;
    
    while(user<1||user>99){
        cout << "Please re-enter a new number: ";
        cin >> user;
    }
    user = pow(user,2);
    cout << "Number squared is " << user << endl;
    return 0;
}