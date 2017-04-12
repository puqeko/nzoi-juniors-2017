#include <iostream>
using namespace std;

int main() {
    char str[50] = {};
    for (int i = 0; i < 50; i++) {
        cin.get(str[i]);
        if (str[i] == ' ')
            cout << "Wa" << endl;
        else cout << str[i];
    }
}
