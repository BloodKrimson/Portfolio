/*
Author: Brandon Angos
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab1C

Description: 
For leap.cpp program I just followed the given pseudocode which if just using else if 
since there all multiple conditions to this program that a just a simple if and else statement won't work.
For each condition I have to use mod(%) simce most conditions are asking if the year 
that the user chooses is divisible by a certain number. This means that year(user input)%x(given number)
has to equal 0 for it to be divisible; if it isn't then a number other than 0, positive ofcourse, will be returned.
If it meants a certain condition it will either print or output common year or leap year. 
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    
    int year;
    cout << "Enter a year: ";
    cin >> year;
    if(year%4!=0){
        cout << "common year\n";
    }else if(year%100!=0){
        cout << "leap year\n";
    }else if(year%400!=0){
        cout << "common year\n";
    }else{
        cout << "leap year\n";
    }
    return 0;
}