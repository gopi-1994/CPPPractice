#include<iostream>
using namespace std;
 int main(){
    int a , b,c;
    cout << "Enter three didgits..." << endl;
    cout << "1st " ;
    cin >> a ;
    cout << "2nd.. ";
    cin >> b ; 
    cout  << "3rd.. ";
    cin >>c ;
    if((a>b) && (a>c)){
        cout << a << " is a gretest of three numbers" << endl;
    } else if ((b>a) && (b>c)){
        cout << b << " is greatest of three numbers" << endl;
    } else {
        cout << c << " is greatest of three numbers" << endl;
    }
    return 0;
 }