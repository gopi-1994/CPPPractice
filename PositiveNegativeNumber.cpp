#include<iostream>
using namespace std;
// Program to check whether a number is positive or negative
int main(){
    std::cout << "Enter a number" << std::endl;
    int a ;
    std::cin >> a; 
    if (a >= 0){
        std::cout << a << " is a positive number" << endl;
    } else {
        cout << a << " is a negative number" << endl;
    }
    return 0;
}