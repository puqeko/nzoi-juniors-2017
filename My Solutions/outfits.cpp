#include <iostream>

using namespace std;

int n, d;

int casi(int i) {
    return n - i + 1;
}

int main () {
    for (int i = 1;;i++) {
        cin >> n >> d;
        
        if (n == 0 && d == 0)
            break;
        
        cout << "Scenario " << i << '\n';
        
        int rbec, rcas;
        cin >> rbec >> rcas;
        rcas = casi(rcas);
        
        // days
        for (int j = 1; j <= d; j++) {
            cout << "Day " << j << ' ';
            
            int bec, cas;
            cin >> bec >> cas;
            cas = casi(cas);
            
            if (bec >= rbec && rbec != 0) bec++;
            if (cas >= rcas && rcas != 0) cas++;
            
            if (bec == cas)
                cout << "ALERT\n";
            else cout << "OK\n";
        }
    }
}
