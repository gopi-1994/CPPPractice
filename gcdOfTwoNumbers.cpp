#include<iostream>
#include <cmath>
using namespace std;

int gcd(int a, int b){
    // min(a,b);
    int g = 1;
    for (int i = 1; i <= min(a,b); i++){
        if((a % i ==0) && (b % i ==0)){
            g = i;
            // break;
        }
    }
    return g;
}
// Euclidean algorithm
int gcdm(int a, int b){
    if (b==0){
        return a;
    }else{
    return gcdm(b, a%b);
    }


}

int main(){
    cout << gcd(5,15) <<"\n";
    cout << gcdm(3,15) ;
    return 0;
}