#include <stdio.h>

int main() {
    int n, tot = 0, mi = 101, mx = 0, cur;
    scanf("%d", &n);
    
    while (n--) {
        scanf("%d", &cur);
        tot += cur;
        if (cur > mx) mx = cur;
        if (cur < mi) mi = cur;
    }
    
    printf("%d %d %d\n", tot, mi, mx);
}
