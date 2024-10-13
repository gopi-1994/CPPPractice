#include <iostream>
#include <algorithm>

using namespace std;

bool areAnagram(string a, string b){
    if (a.length()!= b.length()){
        return false;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a==b;

}
int main(){
    string a,b ;
    cout << "enter first string" << endl;
    getline(cin,a);
    cout << "enter second string" << endl;
    getline(cin,b );
    if(areAnagram(a,b)){
        cout << "The two strings are anagram ";
    }else {
        cout << "The two strings are not anagram ";
    }
    return 0;
}