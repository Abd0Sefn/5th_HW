#include<iostream>
using namespace std;
double average(int arr[], int len){
    if(len == 0)
    return 0;
    double avg = arr[len - 1];
    avg = (avg + average(arr, len - 1) * (len - 1)) / len;
    return avg ;
}
int main(){
    int arr[] = {3, 11, 7, 9};
    cout << average(arr, 4);
}