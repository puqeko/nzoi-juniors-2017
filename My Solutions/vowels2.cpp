#include <iostream>

using namespace std;

int main () {
    char c;
    int cnt[256] = {};
    while(cin >> c) cnt[c]++;
    cout << (cnt['a'] + cnt['e'] + cnt['i'] + cnt['o'] + cnt['u']) << '\n';
}
