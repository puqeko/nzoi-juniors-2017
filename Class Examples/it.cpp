#include <iostream>
#include <vector>

using namespace std;

int main() {
    int nums[] = {7, 3, 2, 6, 3, 98, 34};
    vector<int> vec(nums, nums + 7);
    
    for (auto it : vec)
      cout << it << ' ';
    cout << endl;
}