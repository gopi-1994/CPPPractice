#include<iostream>

using namespace std;

int gcd(int a , int b ){
    if (b == 0){
        return a;
    }else {
        return  gcd(b, a%b);
    }
}

int lcm (int a , int b){
    return (a*b)/gcd (a,b);
}

int main(){
    int a = 24;
    int b = 13;

    cout << "LCM of "<<a <<" & " << b <<" is " << lcm(a,b) << endl;
    return 0;
    }