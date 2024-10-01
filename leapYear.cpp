#include <iostream>
 using namespace std;
 bool leapYear(int year){
   if ((year % 4 ==0 && year % 100 != 0) || (year % 400 ==0)){
    return true;
   }
    
    return false;
 }
 int main (){
    int y{};
    cout << "enter a year" <<endl;
    cin >> y;
    if (leapYear(y)){
        cout << "Yes" << endl;
    }else {
        cout << "No" << endl;
    }
    cout << leapYear(y) <<endl;
    return 0;
 }