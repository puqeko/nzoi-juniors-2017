#include <iostream>

using namespace std;

int main () {
    int n, a = 0, b = 0, score;
    char team;
    cin >> n;
    
    while (n--) {
        cin >> team >> score;
        if (team == 'a') a += score;
        else b += score;
    }
    
    if (a == b) cout << "draw" << endl;
    else cout << "team " << (a > b ? 'a' : 'b') << " wins" << endl;
}
