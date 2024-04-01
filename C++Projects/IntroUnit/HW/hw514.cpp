/*
Author: Brandon Angos
Course: CSCI-135
Instructor: Tong Yi
Assignment: ex5.14
*/

#include <iostream>
using namespace std;

void sort2(int& a, int& b){
    int temp;
    if(a>b){
        temp = b;
        b = a;
        a = temp;
    }
    
}

int main(){
    int u = 44;
    int v = 2;
    sort2(u , v);
    return 0; 
}