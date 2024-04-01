/*
Author: Brandon Angos
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab3B

SO the program will first count the number of lines in the file and then close the file and then open it up again and this time 
enter the storage values in an array and at the same time it will track the min and max values as it traverses through the
array.
*/

#include <iostream>
#include <string>
#include <fstream>
#include <climits>
using namespace std;

int main(){
    string date, junk, line;
    double eastSt;
    // ifstream file("Current_Reservoir_Levels.tsv");
    // if(file.fail()){
    //     cerr << "File cannot be opened for reading." << endl;
    //     exit(1);
    // }
    // getline(file, junk);
    // int lines = 0;
    int i = 0;
    // while(getline(file, line)) { 
    //     lines++;
    // }
    // file.close();
    ifstream f("Current_Reservoir_Levels.tsv");
    getline(f, junk);
    double eStorage[365];
    double temp1, temp2;
    while(f >> date >> eastSt) { 
        f.ignore(INT_MAX, '\n'); //skips to the end of line, 
                                    //ignorring the remaining columns 
        // cout << date << eastSt << eastEl << endl;
        eStorage[i]=eastSt;
        if(i==0){
            temp1 = eStorage[0];
            temp2 = eStorage[0];
        }
        if(i!=0){
            if(temp1 < eStorage[i])
                temp1 = eStorage[i];
            if(temp2 > eStorage[i])
                temp2 = eStorage[i];
        }
        i++;
    }
    cout << "minimum storage in East basin: " << temp2 << " bilion gallons" << endl;
    cout << "MAXimum storage in East basin: " << temp1 << " billion gallons" << endl;
    
    return 0;
}