/*
Author: Brandon Angos
Course: CSCI-135
Instructor: Tong Yi
Assignment: Project 1 Task B
Program will ask for the number of questions the user wants to be asked and then it will generate 
that number of math questions that the user will answer. For every reply that is correct a count will be incremented
to show the number of questions the user has gotten correct. Then a percentage will be printed along with a letter grade.
*/
#include <iostream>
#include <string>
#include <array>
#include <cstdlib>
#include <time.h>
using namespace std;
int main(){
    srand(time(NULL));
    bool isCorrect;
    char oper[]={'+','-','*','/','%'};
    int num1, num2, idx, answer, reply, size, questionNum;
    double numQuestions = 0.0;
    char operand;
    string letterGrade;
    cout << "Enter the total number of question to ask: ";
    cin >> numQuestions;
    while(numQuestions<=0){
        cout << "The number of questions cannot be zero or negative. Re-enter: ";
        cin >> numQuestions;
    }
    cout << endl;
    double count = 0.0;
    for(int j=0;j<numQuestions;j++){
        size = sizeof(oper)/sizeof(oper[0]);
        idx=rand()%size;
        operand = oper[idx];
        num1=rand()%10;
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
        questionNum = j + 1;
        cout << "(" << questionNum << ") " << "What is " << num1 << " " << operand << " " << num2 << "? ";
        cin >> reply;
        isCorrect = (answer == reply);
        cout << boolalpha << (answer == reply) << '\n' << endl;
        if(isCorrect == true)
            count++;
    }
    double percentage = (count/numQuestions)*100;
    if(percentage>=90){
        letterGrade = "A";
    }else if(percentage<90&&percentage >= 80){
        letterGrade = "B";
    }else if(percentage<80&&percentage >= 70){
        letterGrade = "C";
    }else if(percentage<70&&percentage >= 60){
        letterGrade = "D";
    }else{
        letterGrade = "F";
    }
    cout << "percentage correct: " << percentage << "%" << endl;
    cout << "letter grade: " << letterGrade << endl;
    return 0; 
}
