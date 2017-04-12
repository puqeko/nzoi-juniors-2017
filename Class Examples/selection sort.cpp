#include <iostream>
using namespace std;

int main() {
    int nums[1001] = {}, len;
    while (scanf("%d", nums + len) != EOF) len++;
    
    for (int p = 0; p < len; p++) {
        cout << nums[p] << ' ';
        // [1, 2, 3]
        int pos, min = nums[p];
        for (int i = p + 1; i < len; i++) {
            if (nums[i] < min) {
                min = nums[i];
                pos = i;
            }
        }
        
        int temp = nums[p];
        nums[p] = nums[pos];
        nums[pos] = temp;
    }
    
    cout << endl;
    
    for (auto i : nums) {
        if (i != 0)
            cout << i << ' ';
    }
}
