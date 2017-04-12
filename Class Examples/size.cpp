#include <iostream>
using namespace std;
int main() {
    int noOfLines;
    bool y = true;
    while (y) {
        cin >> noOfLines;
        if (noOfLines == 0) {
            y = false;
            break;
        }
        for (int i = 1; i <= noOfLines; i = i + 1) {
            for (int j = 0; j < i; j = j + 1) {
                cout << "*";
            }
            cout << '\n';
        }
    }
    cout << endl;
}
