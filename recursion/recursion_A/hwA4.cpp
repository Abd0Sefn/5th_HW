#include<iostream>
using namespace std;
int sum(int arr[], int len){
    if(len == 0)
    return 0;
    int sun =arr[len - 1];
    sun += sum(arr, len - 1);
    return sun;
}
int main(){
    int arr[] = {7, 2, 3, 4};
    cout << sum(arr, 4);
    return 0;
}