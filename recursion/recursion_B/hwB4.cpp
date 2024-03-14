#include<iostream>
using namespace std;
bool is_palindrome(int arr[], int len, int i = 0){
    if ( i == len  - 1 || (i == len - 2 && arr[i] == arr[len - 1]))
    return true;
    bool ans = (arr[len - 1] == arr[i] && is_palindrome(arr, len - 1, i + 1)) ;
    return ans;
}
int main(){
    int arr[] = {1,4, 3,7,8,3,4, 1};
    cout << is_palindrome(arr,8);
    return 0;
}