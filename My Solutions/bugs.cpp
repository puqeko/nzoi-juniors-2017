#include <iostream>

using namespace std;

int main () {
    int year;
    cin >> year;
    cout << year + 7 - year % 7 << endl;
}
