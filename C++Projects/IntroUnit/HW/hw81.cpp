/*
Author: Brandon Angos
Course: CSCI-135
Instructor: Tong Yi
Assignment: ex8.1



*/
#include <iostream>
#include <fstream>
#include <climits>
using namespace std;
int main(){
    ofstream file;
    file.open("hello.txt");
    file << "Hello, World!";
    file.close();
    ifstream hw("hello.txt");
    string word;
    getline(hw, word);
    cout << word << endl;
    return 0;
}