/*
Author: Brandon Angos
Course: CSCI-135
Instructor: Tong Yi
Assignment: lab4E


*/
#include <iostream>
using namespace std; 

int getLength(){
    int l;
    cout << "Input side length: ";
    cin >> l;
    return l;
}

void createLT(int sl){
    int start=0;
    cout << "\nShape:\n";
    for(int i=0;i<sl;i++){
        for(int k=0;k<sl;k++){
            if(k>=start){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << endl;
        start++;
    }
}

int main(){
    int l = getLength();
    createLT(l);

}