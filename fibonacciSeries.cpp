#include <iostream>
using namespace std;

int fibonacciSeries(int n){
    if (n<=1){
        return n;
    }else {
        return fibonacciSeries(n-1) + fibonacciSeries(n-2);
    }   
}
// to get the nth term of fibbonacci series
int fib (int n){
    int first {0}, second{1}, ans{};
    if (n ==0)
    return first;
    for (int i =1; i <=n; i++){
        ans = first + second;
        first = second;
        second = ans;
    }
    return ans;
}
   
int main(){
    int x {5};
    for (int j = 0; j<=x; j++){
        cout << fibonacciSeries(j) << " ";
    }
    cout << endl;
    cout << fib(10) << endl;
    cout << fib(2) << endl;

    return 0;
}