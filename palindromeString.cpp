#include <iostream>

using namespace std;
bool isPalindrome(string s){
    
    int start = 0;
    int end = s.length()-1;
    while (start < end){
        if (s[start] != s[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;

}

int main(){
    string s = "geegl";
    if (isPalindrome(s)){
        cout << "string is a palindrome" << endl;
    }else {
        cout << "string is not a palindrome" << endl;
    }
    return 0;
}