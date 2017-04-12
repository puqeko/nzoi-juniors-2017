#include <iostream>

using namespace std;

int main() {
    int num;
    
    while (cin >> num) {
        if (num == 0) break;
        
        for (int r = 1; r <= num; r++) {
            for (int star = 1; star <= r; star++)
                cout << '*';
            cout << '\n';
        }
    }
}
