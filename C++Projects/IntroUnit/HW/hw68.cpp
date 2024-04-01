/*
Author: Brandon Angos
Course: CSCI-135
Instructor: Tong Yi
Assignment: ex6.8

Program will just check if the arrays are equal to one another meaning if the have the same values at 
every index.
*/
#include <iostream>
#include <array>
using namespace std;

bool equals(int a[], int a_size, int b[], int b_size){
    if(a_size>b_size||b_size>a_size){
        return false;
    }
    for(int i=0;i<a_size;i++){
        if(a[i]!=b[i]){
            return false;
        }
    }
    return true;
}

int main(){
    int a[3] = {1,2,3};
    int b[3] = {1,2,3};
    cout << equals(a, 3, b, 3) << endl;
    return 0;
}