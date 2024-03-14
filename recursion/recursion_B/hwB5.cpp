#include<iostream>
using namespace std;
bool is_prefix(string main, string prefix, int star_pos = 0){
    if(star_pos == prefix.length())
    return true;
    bool res = (main[star_pos] == prefix[star_pos]) && is_prefix(main, prefix, ++star_pos);
    return res;
}
int main(){
    cout << is_prefix("abcdefgh", "abcd") << " " << is_prefix("abcdefgh", "") << " " << is_prefix("abcdefgh", "abd");
    return 0;
}