#include <iostream>
#include <string>

using namespace std;

int main () {
    int n;
    cin >> n;
    
    int track = 0;
    
    string tag;
    while (n--) {
        cin >> tag;
        
        track += (tag == "IN" ? 1 : -1);
    }
    
    if (track > 0)
        cout << track << " person(s) are hiding in the house.\n";
    else if (track < 0)
        cout << -track << " person(s) sneaked in.\n";
    else
        cout << "Nobody misbehaved.\n";
}
