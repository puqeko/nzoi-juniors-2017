#include <stdio.h>

long a, b;
int main() {
    scanf("%li %li", &a, &b);
    
    if (a == b) printf("The numbers are equal\n");
    else printf("The lowest number is %li\n", a < b ? a : b);
}
