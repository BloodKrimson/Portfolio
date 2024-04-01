/*
Author: Brandon Angos
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 6A

*/

#include <iostream>

using namespace std;

int main(){
    string r;
    int c;
    cout << "Input: ";
    getline(cin, r);
    for(int i=0;i<r.length();i++){
        c = (int)r[i];
        cout << r[i] << " " << c << endl;
    }
    
}