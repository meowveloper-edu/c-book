#include <stdio.h>

int main (void) {
    printf("size of int is %zu bytes.\n", sizeof(int));
    printf("size of short int is %zu bytes.\n", sizeof(short int));
    printf("size of long int is %zu bytes.\n", sizeof(long int));
    printf("size of unsigned int is %zu bytes.\n", sizeof(unsigned int));
    return 0;
}