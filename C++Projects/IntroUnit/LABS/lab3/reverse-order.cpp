/*
Author: Brandon Angos
Course: CSCI-135
Instructor: Tong Yi
Assignment: lab3D

Program will initialize an array at the start and for every date the is within the interval
it will add both the date and the west elevation to the array. It will incrememnt after finding 
a match each time. Later it will traverse and print out the contents of the array.
*/

#include <iostream>
#include <string>
#include <climits>
#include <fstream>
using namespace std;

void initializeArray(double* arr, int size){
    
}

int main(){
    string date, junk, startD, endD, line, eastSt, eastEl, westSt, westEl;
    int n=0;
    string arr[365];
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
            arr[n]= date + " "+ westEl + " ft";
            n++;
        }
        
    }
    for(int i=364;i>-1;i--){
        cout << arr[i] << endl;
    }

}