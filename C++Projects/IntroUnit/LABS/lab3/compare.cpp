/*
Author: Brandon Angos
Course: CSCI-135
Instructor: Tong Yi
Assignment: lab3C

Program will go line by line and compare the elvation values of the west and east and 
then print out the date and which side has a greater elevation and if neither it will print out 
Equal.
*/

#include <iostream>
#include <fstream>
#include <climits>
#include <string>
using namespace std;

int main(){
    string date, junk, startD, endD;
    double eastSt, eastEl, westSt, westEl;
    cout << "Enter starting date (MM/DD/YYYY): ";
    cin >> startD;
    cout << "Enter ending date (MM/DD/YYYY): ";
    cin >> endD;
    ifstream file("Current_Reservoir_Levels.tsv");
    getline(file, junk);
    if(file.fail()){
        cerr << "File cannot be opened for reading." << endl;
        exit(1);
    }
    while(file >> date >> eastSt >> eastEl >> westSt >> westEl){
        file.ignore(INT_MAX, '\n');
        if(startD<=date&&date<=endD){
            if(eastEl==westEl){
                cout << date << " Equal" << endl;
            }else if(eastEl<westEl){
                cout << date << " West" << endl;
            }else{
                cout << date << " East" << endl;
            }
        }
    }
    return 0;
}