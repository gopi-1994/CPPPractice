#include<iostream>
using namespace std;
double facotrial(int a){
    int x{1};
    while (a >1){
        x *=a;
        a--;
    }
    return x;
}
int main(){
    int a;
    cout << "enter a number for factorial" << endl;
    cin >> a;
    cout << "facotrial of "<< a << " is " << facotrial(a) << endl;
    return 0;
}