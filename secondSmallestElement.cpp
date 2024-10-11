#include <iostream>
using namespace std;

int print2Smallest(int arr[], int n){
    int first, second;
    if (n < 2){
        cout << "Invalid input" << endl;
        return -1;
    }
    first = second = INT_MAX;
    for (int i = 0; i<n; i++){
        if (arr[i] < first){
            second = first;
            first = arr[i];
        } else if (arr[i] < second && arr[i] != first){
            second = arr[i];
        }
    }
    if (second == INT_MAX){
        cout << "There is no second smallest number" << endl;
        return -1;
    }
    return second;
}
int main(){
    // int arr [] = { 1,2,3,4,5,6};
    int arr [] = { 1,1,1,1,1,1};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int ans = print2Smallest(arr,n);
    if (ans != -1)
    cout << " Second smallest number is " << ans <<endl;

    return 0;
}
