#include <iostream>
#include <algorithm>

using namespace std;

int main () {
    int nums[10001] = {};
    int N, n, i;
    cin >> N;
    
    for (i = 0; i < N; i++) {
        cin >> n;
        nums[i] = n;
    }
    
    sort(nums, nums + N);
    
    for (i = 0; i < N; i++)
        cout << nums[i] << '\n';
}
