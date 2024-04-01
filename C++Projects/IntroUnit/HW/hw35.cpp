/*
Author: Brandon Angos
Course: CSCI-135
Instructor: Tong Yi
Assignment: ex3.5


Program aks the user for 3 numbers from (-oo,oo) and it will then 
determine if the numbers are ordered in either an ascending or descending order, but if neither then neither should be printed out.
*/
#include <iostream>
#include <string>
#include <algorithm>
#include <array>
using namespace std;

bool isOrderedA(int* arr, int size){
    bool isOrdered;
    for(int j=0;j<size-1&&isOrdered;j++){
       if(arr[j]>=arr[j+1])
        return false;
    }
    return true;
}
bool isOrderedD(int* arr, int size){
    bool isOrdered;
    for(int j=0;j<size-1&&isOrdered;j++){
        if(arr[j]<=arr[j+1])  
            return false;
    }
    return true;
}
int main(){
    int x;
    int num[3];
    int a = sizeof(num)/sizeof(int);
    for(int i=0;i<a;i++){
        cout << "enter a number: ";
        cin >> x;
        num[i]=x;
    }
    bool orderedA = isOrderedA(num,a);
    bool orderedD = isOrderedD(num,a);
    if(!orderedA&&!orderedD){
        cout << "neither" << endl;
    }else if(orderedA){
        cout << "increasing" << endl;
    }else{
        cout << "decreasing" << endl;
    }
    return 0;
}