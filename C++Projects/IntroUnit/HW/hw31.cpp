/*
Author: Brandon Angos
Course: CSCI-135
Instructor: Tong Yi
Assignment: ex1.7


Program aks the user for a number any number from (-oo,oo) and it will then 
determine if the number is positive, negative or zero using the else if statement.
*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int x;
    cout << "Enter a number:";
    cin >> x;
    cout << "your number is ";
    if(x>0){
        cout << "positive" << endl;
    }else if(x<0){
        cout << "negative" << endl;
    }else{
        cout << "zero"<< endl;
    }
    return 0;
}
