#include <iostream>

using namespace std;

int main () {
    int n;
    cin >> n;
    
    for (int ln = 1; ln <= n; ln++) {
        if (ln % 15 == 0) cout << "FizzBuzz";
        else if (ln % 3 == 0) cout << "Fizz";
        else if (ln % 5 == 0) cout << "Buzz";
        else cout << ln;
            
        cout << '\n';
    }
}
