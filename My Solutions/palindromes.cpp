#include <iostream>
#include <string>

using namespace std;

int main () {
    string s;
    
    cin >> s;
    
    int l = s.length() - 1;
    
    for (int i = 0; i < l; i++) {
        if (s[i] != s[l-i]) {
            cout << "no\n";
            return 0;
        }
    }
    cout << "yes\n";
}
