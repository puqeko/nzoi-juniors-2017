#include <iostream>

using namespace std;

int main () {
    int n, skip;
    cin >> n >> skip;
    string word;
    
    for (int i = 0; i < n; i++) {
        cin >> word;
        if (i % skip == 0)
            cout << word << '\n';
    }
}
