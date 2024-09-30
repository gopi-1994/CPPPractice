#include<iostream>
#include <cstring>
using namespace std;

int main(){
    char vowel[]= {'a','e','i','o','u','A','E','I','O','U'};
    string words ;
    int vol{};

    cout << "Type a sentence..." << endl;
    getline(cin, words);
    for (char ch : words){
        for (char v : vowel){
            if (ch == v){
                vol++;
                break;
            }
        }
    }
    cout << "Total vowels in the word is " << vol << endl;

    return 0;
}