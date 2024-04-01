/*
Author: Brandon Angos
Course: CSCI-135
Instructor: Tong Yi
Assignment: lab4A

Program will ask the user for the desired height and width of the box which will be stored in variables.
These variables will be passed to a function that will run a nested loop in order to create the box.
*/

#include <iostream>
using namespace std;

int getWidth(){
    int w;
    cout << "Input width: ";
    cin >> w;
    return w;
}
int getHeight(){
    int h;
    cout << "Input height: ";
    cin >> h;
    return h;
}
void createBox(int w, int h){
    cout << "\nShape:\n";  
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cout << "*";
        }
        cout << endl;
    }
}

int main(){
    int h, w;
    w = getWidth();
    h = getHeight();
    createBox(w, h); 
    return 0;
}