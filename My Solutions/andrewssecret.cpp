#include <stdio.h>

int main() {
    long tot = 0;
    int min = 101, max = 0, cur = 0, num = 0;
    
    while (scanf("%i", &cur) != EOF) {
        tot = tot + cur;
        if (cur > max) max = cur;
        if (cur < min) min = cur;
        num++;
    }
    
    printf("%d %d %d\n", min, max, tot / num);
}
