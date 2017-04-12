#include <stdio.h>

int date;
int main() {
    scanf("%i", &date);
    
    if (date % 400 == 0) printf("yes\n");
    else if (date % 100 == 0) printf("no\n");
    else if (date % 4 == 0) printf("yes\n");
    else printf("no\n");
}
