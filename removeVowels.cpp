#include <iostream>
#include <cstring>

using namespace std;
int main(){
    int j {};
    string words = "Hellow hwo are you";
    char vowel[]= {'a','e','i','o','u','A','E','I','O','U'};
    string res {};
    
    for (char ch : words){
        bool isVowel {false};
        for (char v : vowel){
            if (ch == v){
                // cout << ch ;
                isVowel = true;
                break;
            }
        }
        if (!isVowel){
            res += ch;
        }
    }
    
    cout << "String removed with vowels.... " << res << endl;


    return 0;
}