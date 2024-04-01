/*
Author: Brandon Angos
Course: CSCI-135
Instructor: Tong Yi
Assignment: lab3A

Program takes in a date that the user enters and then opens the tsv file and goes line by line
finding the line that has the exact same date as the one that the user entered. 
From there it will print out the stroage ampunt for the east.
*/

#include <iostream>
#include <string>
#include <fstream>
#include <climits>
using namespace std;

int main(){
    string date, junk, userD;
    double eastSt, eastEl, westSt, westEl;
    cout << "Enter date(MM/DD/YYYY): ";
    cin >> userD;
    //open file and read line to line till date matches date chosen by user
    ifstream file("Current_Reservoir_Levels.tsv");
    if(file.fail()){
        cerr << "File cannot be opened for reading." << endl;
        exit(1);
    }
    getline(file, junk);
    while(file >> date >> eastSt >> eastEl >> westSt >> westEl) { 
        // this loop reads the file line-by-line
        // extracting 5 values on each iteration 
        
        file.ignore(INT_MAX, '\n'); //skips to the end of line, 
                                    //ignorring the remaining columns 
        if(userD==date){
            cout << "East basin storage " << eastSt << " billion gallions" << endl;
        }
        // for example, to print the date and East basin storage:
        // cout << date << " " << eastSt << " " << eastEl << " " << westSt << " " << westEl << endl;
    }
    return 0;
}