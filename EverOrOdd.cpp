#include <iostream>
using namespace std;
bool isEven(int a){
    return (a % 2)==0;
}
int main(){
    int a ;
    cout<< "Enter a number"<< endl;
    cin >> a;
    if(isEven(a)){
        cout << a << " is an even number."<< endl;
    }else {
        cout <<a << " is an odd number"<< endl;
    }
    return 0;   
}