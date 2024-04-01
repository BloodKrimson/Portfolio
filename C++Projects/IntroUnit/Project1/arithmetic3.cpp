/*
Author: Brandon Angos
Course: CSCI-135
Instructor: Tong Yi
Assignment: Project 1 Task C

Will go through the problems.csv file and print out the problem. While doing this it will 
save the answer and expression into a seperate string variable. It will then check for a "." to know whether the answer
is a double or integer. It will then grab the users response and store it into a double or int
and compare with the actual answer to then check it off as right or wrong. At the end it will give you a
letter grade and percentage.
*/

#include <iostream>
#include <fstream>
#include <climits>
using namespace std;
bool isStrThere(string oStr, string c){
    int length = oStr.length();
    int idx = oStr.find(c);
    if(-1<idx&&idx<length){
            return true;
    }else{
        return false;
    }
}
int main(){
    string expression, answer, letterGrade, UserRes,v;
    int userAns, answerInt, count, questionNum;
    double userans, answerDou, numQuestions;
    bool isThere, isCorrect;
    v="problems.csv";
    ifstream file(v);
    if(file.fail()){
        cerr << "File cannot be opened for reading." << endl;
        exit(1);
    }
    questionNum = 1;
    while(getline(file, expression, ',')){
        string ex = "("+ to_string(questionNum)+ ") what is " + expression + "? "; 
        isThere = isStrThere(expression, ".");
        getline(file,answer);
        if(isThere){
            answerDou = stod(answer);
            cout << ex;
            cin >> UserRes;
            userans = stod(UserRes);
            isCorrect = (answerDou==userans);
            cout << boolalpha << (answerDou==userans);
            if(isCorrect){
                count++;
            }
        }else{
            answerInt = stoi(answer);
            cout << ex;
            cin >> UserRes;
            userAns = stoi(UserRes);
            isCorrect = (answerInt==userAns);
            cout << boolalpha << (answerInt==userAns);
            if(isCorrect){
                count++;
            }
        }
        questionNum++;
        numQuestions++;
        cout << "\n" << endl;
        
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
    return 0;
}