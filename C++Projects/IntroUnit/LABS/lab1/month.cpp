
/*
Author: Brandon Angos
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab1D

Description: 
My month.cpp program uses the else if part of the leap program in the IsLeap function which
returns a boolean if it is a leap year or not(True or false). This is only to help for the february part of
this program since February changes number of days it has depending if its a leap year or not.
For the month part or to see if the month is a knuckle bump or gap based on the picture provided on the site.
I skipped the month february and focused on the other months and I based the conditions based on even and
odd and if they're greater or less than 8 or 7 cause that where the pattern changes since there's
2 months that are both 31 days. so that's where i check if the index chosen or the variable idx is greater or less than 8 or 7 to change up the rules of how we
determine if the month has 31 or 30 days.
*/

#include <iostream>
#include <algorithm>
using namespace std;
bool IsLeap(int x){
    if(x%4!=0){
        return false;
    }else if(x%100!=0){
        return true;
    }else if(x%400!=0){
        return false;
    }else{
        return true;
    }
}
int main(){
    int year,idx;
    cout << "Enter a year: ";
    cin >> year;
    bool leapYr = IsLeap(year);
    cout << "Enter a number from 1-12: ";
    cin >> idx;
    if((idx%2!=0&&idx<8)||(idx>7&&idx%2==0)){
        cout << "31 days\n";
    }else if(idx!=2&&(idx%2==0&&idx<8)||(idx>7&&idx%2!=0)){
        cout << "30 days\n";
    }else if(leapYr&&idx==2){
        cout << "29 days\n";
    }else{
        cout << "28 days\n";
    }
    return 0;
}