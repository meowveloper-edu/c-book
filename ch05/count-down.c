#include <stdio.h>


int main (void) {

    int i;

    printf("Please enter a positive integer: ");

    scanf("%d", &i);

    printf("count down started!!\n");
    for (int j = i; j > 0; j--) {
        printf("%d...\n", j);
    }
    printf("liftoff!!\n");
    return 0;
}