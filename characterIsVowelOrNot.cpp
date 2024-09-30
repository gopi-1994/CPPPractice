#include<iostream>

using namespace std;
int main(){
    char a;
    bool isVowel = false;
    char vowel[]= {'a','e','i','o','u','A','E','I','O','U'};
    cout << "enter a character " << endl;
    cin >> a;
    if(isalpha(a)){
        for (char s :vowel){
            if(a == s){
                isVowel = true;
                break;
            }
        }
        if (isVowel){
            cout << a <<" is a vowel."<< endl;
        }else {
            cout << a << " is a consonant" << endl;
        }
    }else { 
        cout << a << " is not an alphabet."<< endl;
    }

    return 0;
}