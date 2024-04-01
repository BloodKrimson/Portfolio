/*
Author: Brandon Angos
Course: CSCI-135
Instructor: Tong Yi
Assignment: lab4D


*/

#include <iostream>
using namespace std;

int getLength(){
    int l;
    cout << "Input side length: ";
    cin >> l;
    return l;
}
void createLT(int sl){
    cout << "\nShape:\n";
    for(int i=0;i<sl;i++){
        for(int k=0;k<i+1;k++){
            cout << "*";
        }
        cout << endl;
    }
}

int main(){
    int l = getLength();
    createLT(l);
}