#include <iostream>
using namespace std;

int fibonacciSeries(int n){
    if (n<=1){
        return 1;
    }else {
        return fibonacciSeries(n-1) + fibonacciSeries(n-2);
    }   
}
int main(){
    int x {5};

    int e{10};
    int t1 {0};
    int t2 {1};

for (int i = 0; i <= e; i++){
    if (i == 1){
        cout << t1 << " , " ;
    } if (i == 2){
        cout << t2 << " , ";
    }

}

    return 0;
}