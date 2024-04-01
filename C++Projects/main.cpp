#include <iostream>
#include <fstream>
#include <climits>
#include <string>
#include <cstdlib>
using namespace std;
string removeLetters(string text){
    int l= text.length();
    string s;
    for(int i=0;i<l;i++){
        int c = (int)text[i];
        if(isalpha(c)==0){
            s+=text[i];
        }
    }
    return s;
}
int main(){
    string name, s1, s2, s3, line;
    ifstream file("scres.tsv");
    if(file.fail()){
        cerr << "error!\t\"" << endl;
        exit(1);
    }
    return 0;
}