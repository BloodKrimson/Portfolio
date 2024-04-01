/*
Author: Brandon Angos
Course: CSCI-135
Instructor: Tong Yi
Assignment: ex5.15
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

void sort3(int& a, int& b, int& c){
    sort2(a, b);
    sort2(a, c);
    sort2(b, c);
}

int main(){
    int u = 12;
    int v = 4;
    int x = 11;
    sort3(u,v,x);
    // cout << "u: " << u << " v: " << v << " x: " << x << endl;
    return 0;
}