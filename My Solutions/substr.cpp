#include <iostream>
#include <string>

using namespace std;

int main() {
    string str, sub;
    cin >> str >> sub;
    
    for (int i = 0, step = 0; i < str.length(); i++) {
        while (i + step < str.length()) {
            if (str[i+step] != sub[step]) {
                step = 0;
                break;
            }
            if (step++ == sub.length() - 1) {
                cout << "yes\n";
                return 0;
            }
        }
    }
    
    cout << "no\n";
}
