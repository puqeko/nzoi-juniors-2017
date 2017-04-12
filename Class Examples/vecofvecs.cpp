#include <iostream>
#include <vector>

using namespace std;

int main () {
    // define variable 'mylist'
    vector<vector<int> > mylist ( 2, vector<int>(7) );
    
    // print it out
    for (auto vec : mylist) {
        for (auto item : vec)
            cout << item << ' ';
        cout << '\n';
    }
}
