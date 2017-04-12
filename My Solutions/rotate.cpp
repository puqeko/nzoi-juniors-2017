#include <iostream>
#include <cctype>

using namespace std;

int main () {
    char c, split = 'n' - 'a';
    
    while (cin.get(c)) {
        if (isalpha(c)) {
            if (tolower(c) - 'a' < split)
                cout << char(c + 13);
            else
                cout << char(c - 13);
        } else cout << c;
    }
    
    cout << "\n";
}
