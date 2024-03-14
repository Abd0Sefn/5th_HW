#include<iostream>
using namespace std;
int length_3n_plus_1(int n){
    int cnt = 0;
    cnt ++;
    if(n == 1)
    return 1;
    if(n % 2 == 0){
        cnt += length_3n_plus_1(n / 2);
    }
    else
    cnt += length_3n_plus_1(3 * n + 1);
    return cnt;
}
int main(){
    cout << length_3n_plus_1(5);
    return 0;
}