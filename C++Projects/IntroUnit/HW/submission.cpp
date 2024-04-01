/*
Author: Brandon Angos
Course: CSCI-135
Instructor: Tong Yi
Assignment: ex7.1

*/
#include <iostream>
using namespace std;

void sort2(double* p, double* q){
    double temp;
    if(*p > *q){
        temp = *p;
        *p = *q;
        *q = temp;
    }
}
int main(){
    double x = 3.7;
    double y = 5.2; 
    sort2(&x, &y);
    return 0;
}