/*
Author: Brandon Angos
Course: CSCI-135
Instructor: Tong Yi
Assignment: lab4F


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
void createTrap(int w, int h){
    int start=0;
    int end = w-1;
    if((h-1)*2>=w){
        cout << "Impossible Shape!\n";
    }else{
        cout << "\nShape:\n";  
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            if(j>=start&&j<=end)
                cout << "*";
            else    
                cout << " ";
        }
        cout << endl;
        start++;
        end--;
    }

    }
    }

int main(){
    int h, w;
    w = getWidth();
    h = getHeight();
    createTrap(w, h); 
    return 0;
}