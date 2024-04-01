/*
Author: Brandon Angos
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 7A

Program will remove take each like and remove the leading space by taking the substring
of each line starting from the index of the string which doesn't equal a space, we used the isspace() 
to do this. After that we just returned the new lines and printed it out in the main funtion.
*/


#include  <iostream>
#include <string>
#include <fstream>
#include <cctype>
using namespace std;
string removeLeadingSpace(string line){
    if((int)line[0]!=0){
        for(int i=0;i<line.length();i++){
            if(isspace((int)line[i])==0){
                int idx = i;
                line = line.substr(idx);
                break;
            }
        }
    }
    return line;
}
int main(int argc, char * argv[]){
    string line;
    while(getline(cin, line)){
        cout << removeLeadingSpace(line) << endl;
    }
    return 0;
}