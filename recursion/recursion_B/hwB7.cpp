#include<iostream>
using namespace std;
bool is_prime(int n, int i = 2){
    if(n <= 1 )
    return false;
    if(n == i)
    return true;
    bool res = n % i != 0 && is_prime(n, i + 1);
    return res;
}
int count_primes(int start, int end){
    if(end == start)
    return is_prime(start);
    else if(end == start + 1)
    return is_prime(end) + is_prime(start);
    int cnt = is_prime(end) + is_prime(start) + count_primes(start + 1, end - 1);
    return cnt;
}
int main(){
    cout << count_primes(10, 200) << endl;
    cout << count_primes(10, 5000000);
    return 0;
}