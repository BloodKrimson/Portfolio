/*
Author: Brandon Angos
Course: CSCI-135
Instructor: Tong Yi
Assignment: Project 1 Task A

CHooses a char from the oper[] and then randomly generates a value for the first value in the expression and
then based on the operator the second value will either be in range [0,9] or [1,9]. Then based on operator the 
we will do the expression with the 2 values and the chosen operator and save it to the int result. Then we will ask the user to solve
the expression and compare the actual result or the correct answer with the user's answer.
If it matches then true will be printed and false if otherwise.
*/
#include <iostream>
#include <array>
#include <cstdlib>
#include <time.h>
using namespace std;
int main(){
    double x=2.0;
    int y=2;
    cout << (x/y) << endl;
    srand(time(NULL));
    char oper[]={'+','-','*','/','%'};
    int num1, num2, idx, answer, reply,size;
    char operand;
    num1=rand()%10;
    size = sizeof(oper)/sizeof(oper[0]);
    idx=rand()%size;
    operand = oper[idx];

    if(operand == '%'||operand == '/'){
        num2=(rand()%9)+1;
        if(operand == '%')
            answer = num1 % num2;
        else
            answer = num1 / num2;
    }else{
        num2=rand()%10;
        if(operand == '*'){
            answer = num1 * num2;
        }else if(operand == '+'){
            answer = num1 + num2;
        }else{
            answer = num1 - num2;
        }
    }
    cout << "What is " << num1 << " " << operand << " " << num2 << "? ";
    cin >> reply;
    cout << boolalpha << (answer == reply) << endl;
    return 0; 
}