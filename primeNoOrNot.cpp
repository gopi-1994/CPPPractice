#include<iostream>
using namespace std;
bool isPrime(int a){
    if (a <= 1){
        return false;
    }
    //check from 2 to n-1
    for(int i= 2;i < a; i++ ){
        if(a %i == 0){
            return false;
        }
    }
    return true;
}
int main (){
    int a{};
    cout << "enter a number" << endl;
    cin >> a;
    
    string b = isPrime(a)? "Is prime" : "not a prime";
    cout << b << endl;

    return 0;
}