#include <iostream>
 #include <cstring>
using namespace std;
int main(){
    int ln =0;
    string a ;
    cout << "Enter a string..."<< endl;
    getline(cin, a);
    // cin >> a;
    for(int i = 0; a[i] != '\0'; i++){
        ++ln;
        // cout<< a[i];
    }
    cout << " \n The length of the string is " << ln << endl;
    return 0;
}