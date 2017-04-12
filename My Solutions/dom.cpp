#include <iostream>
#include <string>

using namespace std;

int main () {
    char chk[10] = "CAMBRIDGE";
    char c;
    
    while (cin >> c) {
        bool found = false;
        for (int i = 0; i < 10; i++)
            if (c == chk[i]) {
                found = true;
                break;
            }
        
        if (!found) cout << c;
    }
    
    cout << endl;
}
