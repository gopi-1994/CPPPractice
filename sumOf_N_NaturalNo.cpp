#include<iostream>
using namespace std;
 int findSum(int a){
    int sum {};
    for (int i= 1; i <= a; i++ ){
        sum +=i;
    }
    return sum;
 }
 int main(){
    int i{};
    cout << "Enter a natural number" << endl;
    cin >> i;
    cout << "Sum of " <<i << " natural number is " << findSum(i)<< endl;
    return 0;
 }