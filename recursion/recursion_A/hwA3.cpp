#include <iostream>
using namespace std;
int arr_max( int arr[], int len){
    if (len == 0)
    return arr[0];
    if(arr[len - 1] > arr_max(arr, len - 1))
    return arr[len - 1];
    else 
    return arr_max(arr, len - 1);
}
int main(){
    int arr[] = {7, 33, 10, 4, 5, 20};
    cout << arr_max(arr, 6);
    cout << arr[4];
    return 0;
}