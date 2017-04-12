#include<iostream>

using namespace std;

int main () {
    int num;
    int counts[256] = {};
    char cur;
    
    cin >> num;
    
    while (num--) {
        cin >> cur;
        counts[(int)cur]++;
    }
    
    cout << "a:" << counts['a'] << '\n';
    cout << "e:" << counts['e'] << '\n';
    cout << "i:" << counts['i'] << '\n';
    cout << "o:" << counts['o'] << '\n';
    cout << "u:" << counts['u'] << '\n';
}
