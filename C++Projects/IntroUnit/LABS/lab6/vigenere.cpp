/*
Author: Brandon Angos
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 6C

*/

#include <iostream>
using namespace std;
char shiftchar(char c, int rshift){
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
string encryptVigenere(string plaintext, string keyword){
    string cipher;
    int charShift, c;
    int kLength = keyword.length();
    int i = 0;
    int k = 0;
    while(plaintext[i]){
        c = (int)plaintext[i];
        charShift = ((int)keyword[k])%97; 
        if((c>64&&c<91)||(c>96&&c<123)){
            cipher += shiftchar(plaintext[i], charShift);
            if(k==kLength-1){
                k = -1;
            }
            i++;
            k++;
        }else{
            cipher += plaintext[i];
            i++;
        }
        
        
    }
    return cipher;
}

int main(){
    string oStr, keyword;
    cout << "Enter plaintext: ";
    getline(cin, oStr);
    cout << "Enter keyword  : ";
    cin >> keyword;
    cout << "Ciphertext     : " << encryptVigenere(oStr, keyword) << endl;
    return 0;
}