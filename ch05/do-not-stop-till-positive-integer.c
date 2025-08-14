#include <stdio.h>

int main (void) {
    int i;
    do {
        printf("please enter a positive integer: ");
        scanf("%d", &i);
    } while (i < 1);

    printf("%d is a positive integer.\n", i);
    return 0;
}