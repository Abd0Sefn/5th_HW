#include<iostream>
using namespace std;
double ans[51]{};
double fibonacci(int n){
    if(n <= 1){
        ans[n] = 1;
        return 1;
    }
    else if(n == 2){
        ans[2] = 2;
        return 2;
    }
    if(ans[n] != 0)
    return ans[n];
    else
    ans[n] = fibonacci(n - 1) + fibonacci(n - 2);
    return ans[n];
}
int main(){
    cout << fibonacci(40);
    return 0;
}