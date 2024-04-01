/*
Author: Brandon Angos
Course: CSCI-135
Instructor: Tong Yi
Assignment: ex2.10

Program just calculates the number of miles the car can travel and then calculates the 
the cost of traveling 100 miles in the car. All the values are stroed in double variables
*/

#include <iostream>
using namespace std;

int main(){
    double numG, fuelE, costpG, totalM, totalC;
    cout << " Enter number of gallons of gas in the tank: ";
    cin >> numG;
    cout << " Enter the fuel efficiency in miles per gallon: ";
    cin >> fuelE;
    cout << " Enter price of gas per gallon: ";
    cin >> costpG;
    totalM=numG*fuelE;
    totalC=((costpG/fuelE)*100);
    cout << "Cost per 100 miles is: $" << totalC << endl;
    cout << "Car can travel " << totalM << endl;
    return 0;
}