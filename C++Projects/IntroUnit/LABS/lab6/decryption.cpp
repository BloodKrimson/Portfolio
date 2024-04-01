/*
Author: Brandon Angos
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 6D

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
string encryptCaesar(string pText, int rShift){
    string cipher; 
    for(int i=0;i<pText.length();i++){
        cipher += shiftchar(pText[i], rShift);
    }
    return cipher;
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

char shiftChar(char c, int lshift){
    int idx = (int)c;
    if(idx<65||(idx>90&&idx<97)||idx>122){
        return c;
    }
    int min, max, rem, diff;
    if(islower(idx)!=0){
        min = 97;
        max = 123;
        idx -= lshift;
        if(idx < min){
            diff = min - idx;
            idx = max - diff;
        }
    }else{
        min = 65;
        max = 91;
        idx -= lshift;
        if(idx < min){
            diff = min - idx;
            idx = max - diff;
        }
    }
    return char(idx);
}

string decryptCaesar(string ciphertext, int lshift){
    string decipher;
    for(int i=0;i<ciphertext.length();i++){
        decipher += shiftChar(ciphertext[i], lshift);
    }
    return decipher;
}

string decryptVigenere(string ciphertext, string keyword){
    string decipher;
    int charShift, c;
    int kLength = keyword.length();
    int i = 0;
    int k = 0;
    while(ciphertext[i]){
        c = (int)ciphertext[i];
        charShift = ((int)keyword[k])%97; 
        if((c>64&&c<91)||(c>96&&c<123)){
            decipher += shiftChar(ciphertext[i], charShift);
            if(k==kLength-1){
                k = -1;
            }
            i++;
            k++;
        }else{
            decipher += ciphertext[i];
            i++;
        }
    }
    return decipher;
}

int main(){
    string oStr, keyword;
    int shift;
    cout << "Enter plaintext: ";
    getline(cin, oStr);
    cout << "= Caesar =" << endl;
    cout << "Enter shift    : ";
    cin >> shift;
    string cypherC = encryptCaesar(oStr, shift);
    cout << "CipherText      : " << cypherC << endl;
    cout << "Decrypted      : " << decryptCaesar(cypherC, shift) << endl;
    cout << "= Vignere =" << endl;
    cout << "Enter keyword: ";
    cin >> keyword;
    cypherC = encryptVigenere(oStr, keyword);
    cout <<  "CipherText    : " << cypherC << endl;
    cout << "Decrypted      : " << decryptVigenere(cypherC, keyword) << endl;
    return 0;
}