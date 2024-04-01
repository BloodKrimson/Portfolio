/*
Author: Brandon Angos
Course: CSCI-135
Instructor: Tong Yi
Assignment: lab4B

Program will ask the user for a height and width. These two inputs will then be called in the function
createCB() which will print out the checkerboard. It uses a nested iteration as well as if statements to print 
either a space or * as k and i increment in the for loops.
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
void createCB(int w, int h){
    cout << "\nShape:\n";
    for(int i=0;i<h;i++){
        for(int k=0;k<w;k++){
            if(i%2==0){
                if(k%2==0)
                    cout << "*";
                else
                    cout << " ";
            }else{
                if(k%2==0)
                    cout << " ";
                else
                    cout << "*";
            }
            
        }
        cout << endl;
    }
}
int main(){
    int w, h;
    w = getWidth();
    h = getHeight();
    createCB(w, h);
    return 0;
}