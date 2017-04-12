#include <stdio.h>

int main() {
    int tot = 0, mi = 101, mx = 0, cur;
    
    while (scanf("%d", &cur)) {
        if (cur < 0) break;
        
        tot += cur;
        if (cur > mx) mx = cur;
        if (cur < mi) mi = cur;
    }
    
    printf("%d %d %d\n", tot, mi, mx);
}
