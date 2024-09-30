#include<iostream>
#include <cstring>
using namespace std;
int main(){
    // toggle uppper to lower & vice versa
    string a;
    cout <<" enter a string to toggle" << endl;
    getline(cin, a );
    for (int i = 0; a[i] != '\0'; i++){
        if (islower(a[i])){
            a[i] = toupper(a[i]);
        }   else {
            a[i] = tolower(a[i]);
        }
    }
    cout << a <<endl;
    return 0;
}