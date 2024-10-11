#include <iostream>

using namespace std;

void findMinMax(int arry[], int n){
    int min = arry[0];
    int max = arry[0];
    for (int i =0; i < n; i++){
        if (arry[i] < min){
            min = arry[i];
        } else if(arry[i] > max) {
            max = arry[i];
        }
    }
    cout << "min: " << min << endl;
    cout << "max: " << max << endl;

}

int main(){
    int arry[] = {3,1,5,9,0,45};
    int n = sizeof(arry)/ sizeof(arry[0]);
    findMinMax(arry, n);
    return 0;
}