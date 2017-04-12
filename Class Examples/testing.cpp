#include <iostream>

using namespace std;

int main() {
    
    char list[10], i=0;
    
    while (cin >> *(list + i)) i++;
    
    for (auto j : list) {
        cout << j << '\n';
    }
}
