/*
Author: Brandon Angos
Course: CSCI-135
Instructor: Tong Yi
Assignment: lab4G

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
    int count = 0;
    int count2 = 0;
    bool isBlack;
    bool isRowB= true;
    cout << "\nShape:\n";
    for(int i=0;i<h;i++){
        if(count2!=0&&count2%3==0){
            isRowB = !(isRowB);
        } 
        if(isRowB){
            isBlack = true;
                
        }else{
            isBlack = false;
        }
        for(int k=0;k<w;k++){
            if(isBlack){
                cout << "*";
                count++;

            }else{
                cout << " ";
                count++;
            }
            if(count%3==0){
                isBlack=!isBlack;
            }
        }
        count = 0;
        cout << endl;
        count2++;
    }
}

int main(){
    int h, w;
    w = getWidth();
    h = getHeight();
    createCB(w, h); 
    return 0;
}

            