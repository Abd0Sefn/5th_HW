#include<iostream>
using namespace std;
int suffix_sum(int arr[], int len, int n){
    if (n == 0)
    return 0;
    int sum = arr[len - 1];
    sum += suffix_sum(arr, len - 1, n - 1);
    return sum;
}
int main(){
    int arr[] = {1, 3, 4, 6, 7};
    cout << suffix_sum(arr, 5, 3);
    return 0;
}