/*
Author: Brandon Angos
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 6B

*/

#include <iostream>
using namespace std;
char shiftChar(char c, int rshift){
    int idx = (int)c;
    if(idx<65||(idx>90&&idx<97)||idx>122){
        return c;
    }
    int min, max, rem;
    if(islower(idx)!=0){
        min = 96;
        max = 122;
        idx += rshift;
        if(idx> max){
            rem = idx%max;
            idx = rem+min;
        }
    }else{
        min = 64;
        max = 90;
        idx += rshift;
        if(idx> max){
            rem = idx%max;
            idx = rem+min;
        }
    }
    return char(idx);
}
string encryptCaesar(string pText, int rShift){
    string cipher; 
    for(int i=0;i<pText.length();i++){
        cipher += shiftChar(pText[i], rShift);
    }
    return cipher;
}
int main(){
    // cout << islower(90) << endl;
    string oStr, cStr;
    int shift;
    cout << "Enter plaintext: ";
    getline(cin, oStr);
    cout << "Enter shift:   ";
    cin >> shift;
    cout << "Ciphertext:    " << encryptCaesar(oStr, shift) << endl;
}