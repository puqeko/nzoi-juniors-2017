#include <iostream>

using namespace std;

int main() {
    
    long long tot = 0;
    int N;
    
    cin >> N;
    while (N--) {
        int a, b, c, t;
        cin >> a >> b >> c;
        t = a * b * c;
        cout << t << '\n';
        tot += t;
    }
    cout << tot << endl;
}
