#include<iostream>
#include <math.h>
using namespace std;
bool isArmstrongNumber(int num){

    int temp = num;
    int sumofPower {};
    // int numOfDig{};

    // while(num !=0){ 
    //     numOfDig++;
    //     num /= 10;    
    // }
    // num = temp;
    while(num > 0){
        int digi = num % 10;
        sumofPower += pow(digi,3);
        num /=10;
    }
    return temp == sumofPower;
}
int main(){
     if (isArmstrongNumber(10)){
        
        cout<< "yes";
     }else {
        cout << "no";
     }
    
    return 0;
}