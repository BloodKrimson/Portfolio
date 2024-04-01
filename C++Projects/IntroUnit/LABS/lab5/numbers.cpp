/*
Author: Brandon Angos
Course: CSCI-135
Instructor: Tong Yi
Assignment: lab5G

*/
#include <iostream>
#include <climits>
using namespace std;


bool isPrime(int n){
    if(n<2){
        return false;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int nextPrime(int n){
    int np;
    for(int i=n+1;i<INT_MAX;i++){
        if(isPrime(i) == true){
            np = i;
            break;
        }
    }
    return np;
}

bool isDivisibleBy(int n, int d){
    if(d!=0 && n%d==0){
        return true;
    }else{
        return false;
    }
}

int countPrimes(int a, int b){
    int count =0;
    for(a;a<=b;a++){
        if(isPrime(a)==true){
            count++;
        }
    }
    return count;
}

bool isTwinPrime(int n){
    if(isPrime(n)!=true){
        return false;
    }
    int nb = n-2;
    int na = n+2;
    if(isPrime(nb)==true||isPrime(na)==true){
        return true;
    }
    return false;
}

int nextTwinPrime(int n){
    int ntp;
    for(int i=n+1;i<INT_MAX;i++){
        if(isTwinPrime(i)==true){
            ntp = i;
            break;
        }
    }
    return ntp;
}

int largestTwinPrime(int a, int b){
    int ltp = -1;
    for(int i=b;i>a-1;i--){
        if(isTwinPrime(i)==true && i > ltp){
            ltp = i;
            break;
        }
            
    } 
    return ltp;
}

int main(){
    // bool ip = isPrime(2);
    // if(ip)
    //     cout << "Yes" << endl;
    // else 
    //     cout << "No" << endl; 
    // return 0;
    // cout << nextPrime(2) << endl;
    // cout << countPrimes(2,9) << endl;
    // cout << isTwinPrime(7) << endl;
    // cout << nextTwinPrime(17) << endl;
    cout << largestTwinPrime(0, 15485661) << endl;
}