#include<iostream>
using namespace std;
double fibonacci(int n){
    if(n <= 1)
    return 1;
    else if (n == 2)
    return 2;
    else if (n > 2){
    return 2 * fibonacci(n - 2) + fibonacci(n - 3);
    }
}
int main(){
    cout << fibonacci(40);
    return 0;
}