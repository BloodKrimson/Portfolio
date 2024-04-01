/*
Author: Brandon Angos
Course: CSCI-135
Instructor: Tong Yi
Assignment: Project 1 Task D

*/

#include <iostream>
#include <vector>
#include <fstream>
#include <climits>
#include <cstdlib>
#include <time.h>
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
    srand(time(0));
    string expression, answer, line, letterGrade, UserRes,v;
    vector<string> qSet;
    int sz, idx, idxComma;
    double numQuestions = 0;
    bool isThere, isCorrect;
    bool is60 = false;
    int questionNum = 1;
    v="data.csv";
    ifstream file(v);
    if(file.fail()){
        cerr << "File cannot be opened for reading." << endl;
        exit(1);
    }
    while(getline(file, line)){
        qSet.push_back(line);
        numQuestions++;
    }
    sz = qSet.size();
    file.close();
    int count = 0;
    double percentageCorrect = 0;
    while(percentageCorrect <= 60.00){
        if(questionNum>numQuestions){
            break;
        }
        idx = rand()%(sz);
        sz--; //have to remove since we're gonna be manipulating the size of the vector
        line = qSet[idx];
        qSet.erase(qSet.begin()+idx);
        idxComma = line.find(",");
        expression = line.substr(0,idxComma);
        string ex = "("+ to_string(questionNum)+ ") what is " + expression + "? ";
        answer = line.substr(idxComma+1, line.length()-idxComma);
        isThere = isStrThere(expression, ".");
        if(isThere){
            double correctAns = stod(answer);
            cout << ex;
            cin >> UserRes;
            double userDou = stod(UserRes);
            isCorrect = (correctAns==userDou);
            cout << boolalpha << (correctAns==userDou);
            if(isCorrect){
                count++;
            }
        }else{
            int correctIns = stoi(answer);
            cout << ex;
            cin >> UserRes;
            int userInt = stoi(UserRes);
            isCorrect = (correctIns==userInt);
            cout << boolalpha << (correctIns==userInt);
            if(isCorrect){
                count++;
            }
        }
        questionNum++;
        cout << "\n" << endl;
        percentageCorrect = (count/numQuestions) * 100;
        if(percentageCorrect>=60){
            is60 = true;
        }
    }
    if(is60){
        cout << "At least 60% is correct. Stop." << endl;
    }
    cout << "percentage: " << percentageCorrect << "%" << endl;

    return 0; 
}