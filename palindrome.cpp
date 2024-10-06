#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrome(string a){
    int start {};
    int end = a.length() -1;
    while (start < end){
        if (a[start] != a[end]){
            return false;
        }
        start ++;
        end --;
    }
    return true;
}
bool isPalindromeInt(int a){
    int ans {};
    int temp{a};
    while (temp !=0){
        ans = (ans *10)+ (temp %10);
        temp= temp /10;
    }
    return (ans ==a);

}
int main(){
    
    // string v = to_string(a);
    string v = "toot";
    int n = 13321;
    string f =isPalindrome(v)? "yes" : "No" ;
    string in =isPalindromeInt(n)? "yes" : "No" ;
    cout << f << endl;
    cout << in << endl;
    return 0;
}