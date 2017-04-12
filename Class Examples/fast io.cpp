#include <stack>
#include <iostream>

using namespace std;

int main() {
    
    // stop syncing with printf and scanf
    ios::sync_with_stdio(false);
    
    // don't wait for output to finish
    cin.tie(0);
    
    int k;
    stack<int> s;
    
    while (cin >> k) {
        if (k == -1) {
            if (!s.empty()) {
                cout << s.top() << '\n';
                s.pop();
            } else break;
        } else s.push(k);
    }
}
