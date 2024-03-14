#include <iostream>
using namespace std;
void print_triangle(int levels, int i){
    if(i <= levels){
       int tmp = i;
       while(tmp --){
        cout << "*";
       }
       cout << endl;
    }
    return print_triangle(levels, i + 1);
}
int main(){
    print_triangle(6, 1);
    return 0;

}