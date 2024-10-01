#include <iostream>
#include <cstring>

using namespace std;
string spaceRemover(string input){
    string res{};
    for (char c : input){
        if (c != ' '){
            res +=c;
        }
    }
    return res;
}
int main(){
    string in{};
    cout << "Enter the string with space." << endl;
    getline(cin, in);
    cout << "without spaces : " << spaceRemover(in) << endl;

    return 0;
}