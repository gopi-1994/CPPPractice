#include <iostream>
#include <cstring>

using namespace std;

string removeNonAlphabets(string input){
    string res {};
    for (char c : input){
        if (isalpha(c)){
            res +=c;
        }
    }
    return res;
}
int main(){
    string in{};
    cout << "Enter the sentence..." << endl;
    getline(cin,in);
    cout << "Alphabets only ..." << removeNonAlphabets(in)<< endl;
    return 0;
}