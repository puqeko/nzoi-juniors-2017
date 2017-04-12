#include <iostream>
#include <string>

using namespace std;

int main () {
    int n, lns;
    cin >> lns;
    
    int tot[lns];
    
    for (int i = 0; i < lns; tot[i++] = 0);
    for (int i = 0; i < lns; i++) {
        cin >> n;
        tot[n]++;
    }
    
    for (int row = 0; row < lns; row++) {
        cout << row << ':';
        for (int s = 0; s < tot[row]; s++) cout << '*';
        cout << '\n';
    }
}
