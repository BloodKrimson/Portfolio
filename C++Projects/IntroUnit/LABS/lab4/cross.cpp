/*
Author: Brandon Angos
Course: CSCI-135
Instructor: Tong Yi
Assignment: lab4B

Program will ask for input size of the cross and will be passed to the create cross function which
will run a nested for loop however it is only printing an * at most twice per line so I assigned 
a start and end variable to help with printing out the * in each line while both changing after the loop in order to continue printing either 
one space ahead or before to create the X shape.
*/

#include <iostream>
using namespace std;

int getSize(){
    int s;
    cout << "Input size: ";
    cin >> s;
    return s;
}
void createCross(int s){
    cout << "\nShape:\n";
    int start = 0;
    int end = s-1;
    for(int i=0;i<s;i++){
        for(int k=0;k<s;k++){
            if(k==start||k==end)
                cout << "*";
            else 
                cout << " ";
        }
        start++;
        end--;
        cout << endl;
    }
}
int main(){
    int size;
    size = getSize();
    createCross(size);
    return 0;
}