#include<iostream>
using namespace std;
int prefix_sum(int arr[], int n){
    if (n == 0)
    return 0;
    int sum = arr[n - 1];
    sum += prefix_sum(arr, n - 1);
    return sum;
}
int main(){
    int arr[] = {1, 3, 4, 6, 7};
    cout << prefix_sum(arr, 3);
    return 0;
}