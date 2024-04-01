/*
Author: Brandon Angos
Course: CSCI-135
Instructor: Tong Yi
Assignment: Project 1 Task D

program will add the expression and answer to each expression into 2 separate arrays and will also take into account the num of questions that are by counting the lines in
the file. Then we will traverse through the arrays randomly picking an expression as well as the corresponding answer. Once the question is asked the users reply will be 
turned into an int or double if the expression has a "." since the answer would most liekly be a double it a decimal is in the expression. After that the index chosen will be 
swapped with the last index which will be done for the 2 arrays. the last index will ofcourse always decrement in order to not get repeated questionsand the range at which
the index is chosen is also decremented. If either the max number of questions is reached or the percentage correct is above or equal to 60 the loop will stop and print out the percentage.
it will also print out the percentage if it is below 60 after all the questions are completed.
*/

#include <iostream>
#include <vector>
#include <fstream>
#include <climits>
#include <cstdlib>
#include <time.h>
using namespace std;
string line;
int i = 0;
bool isStrThere(string oStr, string c){
    int length = oStr.length();
    int idx = oStr.find(c);
    if(-1<idx&&idx<length){
            return true;
    }else{
        return false;
    }
}
int arrSize(string filename){
    int i;
    ifstream file(filename);
    while(getline(file, line)){
        i++;
    }
    file.close();
    return i;
}
int main(){
    srand(time(0));
    string fileName = "problems.csv";
    string expression, answer;
    int sze = arrSize(fileName);
    string e[sze], a[sze];
    ifstream file(fileName);
    if(file.fail()){
        cerr << "Error on opening the file" << endl;
        exit(1);
    }
    while(getline(file, expression, ',')){
        getline(file, answer);
        e[i] = expression;
        a[i] = answer;
        i++;
    }
    int lastIdx = sze-1;
    double numCorrect = 0.0, numQuestions = double(sze), percentageCorrect = (numCorrect / numQuestions) * 100;
    i = 0;
    while(i < numQuestions){
        string r;
        int index = rand()%(sze);
        expression = e[index], answer = a[index];
        sze--;
        cout << "(" << i+1 << ") what is " + expression << "? ";
        cin >> r;
        if(isStrThere(expression, ".")){
            double reply = stod(r);
            if(stod(answer) == reply){
                cout << "true" << endl;
                numCorrect++;
            }else{
                cout << "false" << endl;
            }
        }else{
            int reply = stoi(r);
            if(stoi(answer) == reply){
                cout << "true" << endl;
                numCorrect++;
            }else{
                cout << "false" << endl;
            }
        }
        cout << endl;
        swap(e[index], e[lastIdx]);
        swap(a[index], a[lastIdx]);
        i++;
        lastIdx--;
        percentageCorrect = numCorrect/numQuestions * 100;
        if(percentageCorrect >= 60){
            cout << "At Least 60% correct. Stop\npercentage: " << percentageCorrect << "%" << endl;
            break; 
        }
    }
    if(percentageCorrect < 60){
        cout << "percentage: " << percentageCorrect << "%" << endl;
    }
    return 0;
}