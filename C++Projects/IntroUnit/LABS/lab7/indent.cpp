/*
Author: Brandon Angos
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 7B

program will first remove the spaces suing the function from part a of this lab and then it will count the 
occurences of '{' and '}' which they will then add to variable x to know how many indents need to be added to the string.
however, if the line has a '}' ten we will automatically decrement x by 1 since a line with a closing bracket 
is indednted one less time than th previous line. we added the indents by reversing the string and adding \t and then reversing 
it back
*/

#include <iostream>
#include <cctype>
#include <algorithm>
#include <string>
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
int countChar(string line, char c){
    int i = 0;
    int count;
    while(line[i]){
        if(line[i] == c){
            count++;
        }
        i++;
    }
    return count;
}

int main(){
    string line;
    int i;
    int x = 0;
    while(getline(cin, line)){
        line = removeLeadingSpace(line);
        if(x>0){
            reverse(line.begin(), line.end());
            for(i=0;i<x;i++){
                if(i==0&&line[line.length()-1] == '}'){
                    i++;
                    if(i==x){
                        break;
                    }
                }
                
                line+='\t';
            }
            reverse(line.begin(), line.end());

        }
        cout << line << endl;
        x += countChar(line, '{');
        x -= countChar(line, '}');
        // cout << "Indents needed: " << x << endl;
    }
    return 0;
}