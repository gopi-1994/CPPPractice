#include<iostream>
using namespace std;
int main(){
    char a;
    cout << "Enter a character..." << endl;
    cin >> a;
    if (isalpha(a)){
        cout << a << " is an alphabet." << endl;
    }else {
        cout << a << " ia not an alphabet." << endl;
    }
    return 0;
}