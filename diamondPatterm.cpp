#include <iostream>

using namespace std;

void printd(int n){
    for (int i = 1; i <= n; i++){
        for (int j = i; j <n; j++){
            cout << " ";
        }
        for (int j = 1; j <= (2*i-1); j++){
            cout<< "*";
        }
        cout <<endl;
    }

    for (int i = n; i >=1; i--){
        for (int j = n ; j > i;j--){
            cout << " ";
        }
        for (int j = 1; j <= (2*i-1); j++){
            cout << "*";
        }
        cout << endl;
    }

}


    
void printDiamond(int n){
    //upper half of diamond
    for (int i=1; i <=n; i++){
        for (int j = i ; j < n; j++){
            cout << " ";
        }
        for (int j = 1; j <= (2*i -1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // bottom half
    for (int i=n-1; i >=1; i--){
        for (int j = n ; j > i; j--){
            cout << " ";
        }
        for (int j = 1; j <= (2*i -1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }

}
int main() {
    // printDiamond(5);
    printd(5);
    return 0;
}