/*
Author: Brandon Angos
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab2C

THis program is like an infinite loop because you will be able to change the elements
of the array with new ints, but only if the index chosen by the user is within range of
[0,9].It'll print out the array or its values before asking the user which index they will want to change.
If the index is out of range then the loop will stop.
*/
#include <iostream>
#include <array>
using namespace std;
void printArray(int arr[], int size){
    for(int j=0;j<size;j++){
        cout << arr[j] << " ";
    }
    cout << endl;
}
int main(){
    int size, i, v;
    int myData[10] = {1,1,1,1,1,1,1,1,1,1};
    size = sizeof(myData)/sizeof(myData[0]);
    // cout << size << endl;
    do{
        printArray(myData,size);
        cout << "\nInput index:  ";
        cin >> i;
        cout << "Input new value: ";
        cin >> v;
        if(0<=i&&i<10){
            myData[i] = v;
        }else{
            cout << "index out of range. Exit.";
        }
        cout << endl;
    }while(-1<i&&i<10);    
    
}