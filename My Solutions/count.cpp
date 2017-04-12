#include<iostream>

using namespace std;

int main () {
    int num;
    int counts[101] = {};
    
    while (cin >> num) {
        if (num < 0) break;
        
        counts[num]++;
    }
    
    for (int i = 0; i < 101; i++) {
        if (counts[i] != 0)
            cout << i << ':' << counts[i] << '\n';
    }
}
