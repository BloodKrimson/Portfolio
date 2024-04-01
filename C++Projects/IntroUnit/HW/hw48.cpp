/*
Author: Brandon Angos
Course: CSCI-135
Instructor: Tong Yi
Assignment: ex4.8

Program just traverses through a string and prints out 
every character of the string on a seperate line.
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    string name;
    cout << "Enter name: ";
    cin >> name;
    int size = name.length();
    // cout << size << endl;
    for(int i=0;i<size;i++){
        cout << name.substr(i,1) << endl;
    }
    return 0;
}