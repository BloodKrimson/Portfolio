/*
Author: Brandon Angos
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab2D

From what I see I think that the int gets to larger and as it approaches 2 billion the next number became negative because
the int went over the max integer amount which is 2.1 billion. So the number after just became negative. That's 
why we see a constant shift from negative and positive in the last 15 elemnts of the array.
*/
#include <iostream>
using namespace std;
int main(){
    int fib[60];
    int size = sizeof(fib)/sizeof(int);
    fib[0]=0;
    fib[1]=1;
    for(int i=2;i<size;i++){
        fib[i] = fib[i-1] + fib[i-2];
    }
    for(int k=0;k<size;k++){
        cout << fib[k] << endl;
    }
    
}