#include <iostream>
using namespace std;
int main() {
    int noOfLines;
    while (1) {
        cin >> noOfLines;
        if (noOfLines == 0)
            break;
        
        for (int i = 0; i < noOfLines; i = i + 1) {
            if (i != 0) {
                cout << endl;
            }
            for (int j = 0; j <= i; j++) {
                cout << "*";
            }
        }
        cout << '\n';
    }
}
